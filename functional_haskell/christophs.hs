{- LEARN
install: https://www.haskell.org/ghcup/
... https://docs.haskellstack.org/en/stable/
https://wiki.haskell.org/Learn_Haskell_in_10_minutes
https://www.haskell.org/get-started/
-}

{- HOW TO RUN
$ ghci ... command prompt
:quit ... to exit ;)
Glasgow Haskell Compiler (GHC); stack for more complex projects
ghc -o main haskell1.hs
./main
-}

{- THEORY
paradigms: 1. imperative (procedure, object-oriented), 2. declarative (functional, logical)
* FP: declarative, what, not how (computer/ CPU, RAM; what's that?!); more mathematical

EXERCISE: get a sublist of a given integer list whose elements are lower or equal than 10.
  HOW:
    def myCount(list)
      for(i=0; i < list.length; i++)
        if(list[i] <= 10)
          result[j++] = list[i]
      return result
  WHAT:
    myCount :: [Int] -> [Int]
    myCount list = [ x | x <- list, x <= 10 ]
  { x | x ∈ list ∧ x ≤ 10 }

* functional: functions as first class citizins (parameters, result; in/out)

* no state/variables, no time => super parallelism! (no I/O, print, read, disk/network/dbms)
  * "pure" = no side effects; yielding always same result
  * it's biggest power, but also limitations (DB, UI?)

* left-associative function term, right-associative function signature ;)
-}

{- ROADMAP
introduction, theory
prefix/infix notation
functionals (filter, map, fold, zip, acc) --> oop: we need template pattern (passing functions/actions instances)
lists; list comprehension: https://wiki.haskell.org/List_comprehension
pattern matching
polymorphy/generics (data types and functions)
quicksort
lazy evaluation

NOT:
curry
monads (I/O)
exception handling
testing (HUnit)
lambda calculus
modules (import/export; selection, aliases)
-}


main = do
--    putStrLn "What is 2 + 2?"
--    x <- readLn
--    if x == 4
--        then putStrLn "You're right!"
--        else putStrLn "You're wrong!"
-- ******
  putStrLn (show (
--      multiplyByTwo 4))
--    isEven 5))
--    filterFun isEven [1,2,3,4]))
--    mapFun multiplyByTwo [1,2,3,4]))
    contains [1,2,3] 5 ))
--    quickSort [4,1,21,9]))

multiplyByTwo :: Int -> Int
multiplyByTwo x = x * 2


-- lists
-- ====================================

{-
constructor + chaining:
  (3:[4, 5, 6]) => [3, 4, 5, 6]
  [3] ++ [4, 5, 6] => [3, 4, 5, 6]
comprehension (building by description):
  [ x | x <- [0..100], mod x 2 == 0]
-}

-- as parameters:
contains :: [Int] -> Int -> Bool
contains [] _ = False
--contains (head:tail) x | head == x = True
contains list@(head:tail) x | head == x = True
                            | otherwise = contains tail x
-- functionals
-- ====================================

-- same recursion schema (recursions a biiiig thing)
factur n | n == 0 = 1
         | n  > 0 = n + factur(n-1)
sumNat n | n == 0  = 0
         | n  > 0 = n + sumNat(n-1)
sumSqu n | n == 0 = 0
         | n > 0 = n*n + sumSqu(n-1)


isEven :: Int -> Bool
isEven x = mod x 2 == 0

-- monomorph function (only single type)
filterSmall :: [Int] -> [Int]
filterSmall list = [ x | x <- list, x <= 10 ]

-- polymorphism: parameter not has type (e.g. Int), but type-PARAMETER (a)
filterFun :: (a -> Bool) -> [a] -> [a]
filterFun f list = [ x | x <- list, f x ]

mapFun :: (a -> b) -> [a] -> [b]
mapFun m list = [ m x | x <- list]

-- length, concat, head, last, tail, splitAt, reverse, ...

-- pattern matching
-- ====================================
sayWhat :: Int -> String -- function signature
-- function implementations (which one being used, determined at runtime)
sayWhat 7  = "matched: 7"
sayWhat 42 = "matched: 42"
sayWhat _  = "matched: Wildcard _"

multiply :: Int -> Int -> Int
multiply 0 _ = 0
multiply _ 0 = 0
multiply x y = (*) x y

-- misc
-- ====================================

-- fake constant
myPi :: Float
myPi = 3.14

maybeAdd :: Int -> (Int -> Int -> Int)
maybeAdd 3 = (+)
maybeAdd _ = (-)

{-
quickSort(list, left, right)
  if(right > left)
    splitIndex = partition(list, left, right, left)
    quickSort(list, left, splitIndex - 1)
    quickSort(list, splitIndex + 1, right)

partition(list, left, right, pivotIndex)
  pivot = list[pivotIndex]
  swap(list[pivotIndex], list[right])
  result = left
  for(i = left; i < right; i++)
    if(list[i] <= pivot)
      swap(list[i], list[result])
      result++
  swap(list[result], list[right])
  return result
-}

-- type parameter is limited to be at least of type Ord (ordinal, numbers)
quickSort :: (Ord a) => [a] -> [a]
quickSort [] = []
quickSort (x:xs) = quickSort [ y | y <- xs, y <= x ] ++ [x] ++ quickSort [ y | y <- xs, y > x ]

-- types (synonymes, enums, ADT, type classes)
-- ====================================

type Euro = Float -- just for documentation purpose; no type safety
data Color = Red | Green | Blue -- enum, or like C unions of scalars
data Car = Color String Euro -- product types
data Tree = Nil | Node Int Tree Tree -- sum types; like C unions with structs/scalars

sumTree :: Tree -> Int
sumTree Nil = 0
sumTree (Node x t1 t2) = x + sumTree t1 + sumTree t2

-- Main> sumTree (Node 3 Nil (Node 7 Nil Nil))
-- 10

{-
         ctors  card  vals
enum     1..*   0     finite
product  1      1..*  inf
sum      1..*   0..*  inf
(enum/product-type are special cases of sum-type)
-}

type Point = (Int, Int) -- a tuple

getX :: Point -> Int
getX (x, y) = x
getY :: Point -> Int
getY (x, y) = y

setX :: Point -> Int -> Point
setX (x, y) x' = (x', y)
setY :: Point -> Int -> Point
setY (x, y) y' = (x, y')

-- Main> getX (3, 4)
-- 3
-- Main> getY (3, 4)
-- 4
-- Main> setX (3, 4) 7
-- (7,4)
-- Main> setY (3, 4) 7
-- (3,7)

-- advanced
-- ====================================

-- TreeS shall be subtype of Size
data TreeS a = Nil | NodeS a (TreeS a) (TreeS a)

class Size a where -- define new type class
  size :: a -> Int -- "interface methode"

instance Size (TreeS a) where -- implement interface on existing type (like mixins from scala)
  size Nil = 0
  size (NodeS x t1 t2) = 1 + size t1 + size t2

instance Size [a] where -- any other
  size = length -- where type a has an implementation for function length (see interface method above)

-- “size Nil” => 0
-- “size (Node 1 (Node 2 Nil Nil) Nil)” => 2
-- “size [True, False, True]” => 3

-- polymorph ADT:
-- data Tree a = Nil | Node a (Tree a) (Tree a)
-- polymorph type synonyms:
--type MyList a = [a]
--lengthList :: List a -> Int
--lengthList = length


{-
"projection"

x + y = z
+(x, y) = z
f(x, y) = z
f(x) = z
f(x, y, ...) = z
xy.. => z

function :: Int -> Int -> Int
NO!  function :: (((Int) -> Int) -> Int)
YES! function :: (Int -> (Int -> (Int)))
the way we see it: function :: (Int -> Int) -> Int
	simplified: very last part is the result, everything else is input

function :: (Int -> (Int -> (Int))) ... "right hand" association

function(40, 2) = 42
function(40) = function''
function'' ... signature: Int -> Int (basically saying: add40(x))
function''(2) = 42

(Int -> (Int -> (Int))) ... pass Int
(Int -> (Int)) ... pass Int
Int

"partial" function application
-}