
--EXERCISE: get a sublist of (a given integer list): whose elements are lower or equal than 10.
--
--def count(list)
--  j=0
--  result = {}
--  for(i=0; i < list.size; i++)
--    if(list[i] <= 10)
--      result[j++] = list[i]
--  return result
--
--{ x | x ∈ list ∧ x ≤ 10 }


main = do
  putStrLn(show(maybeAdd 2 40 2))
  -- mapFun multiplyByTwo [1..400]
  --filterFun isEven [1..5]

myCount :: [Int] -> [Int]
myCount list = [ x | x <- list, x <= 10 ]


-- does the list contain the needle? yes/no
contains :: [Int] -> Int -> Bool
contains [] _ = False
contains (head:tail) needle | head == needle = True
                            | otherwise = contains tail needle

--Bool contains(List<Int> list ====> Int first, List<Int> restOfListWithoutFirst, Int needle) {
--  return if(first == needle) true
--         else contains(restOfTheList, needle)
--}

factorial :: Int -> Int
factorial x  | x == 0 = 1 
             | x > 0 = x*factorial(x-1) 

quicksort :: (Ord a) => [a] -> [a]
quicksort [] = []
quicksort (x:xs) = quicksort [ y | y <- xs, y <= x ] ++ [x] ++ quicksort [ y | y <- xs, y > x ]


-- *******************************************************

multiplyByTwo :: Int -> Int
multiplyByTwo number = number * 2

isEven :: Int -> Bool
isEven x = mod x 2 == 0

filterSmall :: [Int] -> [Int]
filterSmall list = [ x | x <- list, x <= 10]

-- List filterFunInC(FunctionType<..> f, List a)
filterFun :: (a -> Bool) -> [a] -> [a]
filterFun f list = [ x | x <- list, f x]

mapFun :: (a -> b) -> [a] -> [b]
mapFun f list = [ f x | x <- list ]

-- constant, no parameters
pi :: Float
pi = 3.14

maybeAdd :: Int -> (Int -> Int -> Int)
maybeAdd 3 = (+)
maybeAdd _ = (-)

{-
==> infix notation
  x + y
  operand1 operator operand2
==> prefix notation
  + x y
  operator operand1 operand2
-}


-- *******************************************************

type EuroCents = Float
data Bool = True | False -- a.k.a. "enum"(eration)
data Color = Red | Green | Blue
-- typedef Int = ..., -1, 0, 1, ...
data Car = Color String EuroCents -- "product types"


-- Algebraic Data Type/ADT ... { N, 0=neutral, +, - }

data Tree = Nil | Node (Int Tree Tree) -- "sum types"
sumTree :: Tree -> Int
sumTree Nil = 0
sumTree (Node x t1 t2) = x + sumTree t1 + sumTree t2
-- > sumTree (Node 3 Nil (Node 7 Nil (Node 1 Nil (Node 2 Nil (Node 3 ...)))))) ... 10

{-
         ctors  card  vals
enum     1..*   0     finite
product  1      1..*  infinite
sum      1..*   0..*  infinite
(enum/product-type are special cases of sum-type)
-}

data Tree2 a = Nil | Node2 a (Tree2 a) (Tree2 a)

class Sizeable a where -- new type class
    size :: a -> Int

--instance Sizeable (Tree2 Int) where -- node value
--    size Nil = 0
--    size (Node2 x t1 t2) = x + size t1 + size t2


--instance Sizeable (Tree2 Int) where -- possible hardcore homework: height, as in depth, number of vertical layers
--    size Nil = ?
--    size (Node2 x t1 t2) = ?


instance Sizeable (Tree2 a) where
    size Nil = 0
    size (Node2 x t1 t2) = 1 + size t1 + size t2 -- we add 1 (one node), not x (the node's value, as "a" is not an Int)

instance Sizeable [a] where
    size = length

-- size Nil => 0
-- size (Node2 1 (Node2 2 Nil Nil) Nil) => 2 ... counting nodes (2), not sum of node values (3)!
-- size [True, False, False] => 3

