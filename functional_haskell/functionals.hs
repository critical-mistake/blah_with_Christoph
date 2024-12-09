
main = do
  putStrLn (show (mapx [1..4] plus2))

isEven :: Int -> Bool
isEven x = mod x 2 == 0

plus2 :: Int -> Int
plus2 x = x + 2

filterx :: [Int] -> (Int -> Bool) -> [Int] 
filterx list predicate = [x | x <- list, predicate x]

mapx :: [Int] -> (Int -> Int) -> [Int]
mapx list transform = [transform x | x <- list]