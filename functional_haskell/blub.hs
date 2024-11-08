
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
  putStrLn(show(contains [1,3,5] 4))

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

