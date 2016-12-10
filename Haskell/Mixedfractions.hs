mixedFraction :: [Integer] -> String
mixedFraction (x:y:_) = z
        where (n1, n2) = divMod x y
              z        = show n1 ++ " " ++ show n2 ++ " / " ++ show y

getFractions :: [[Integer]] -> [String]
getFractions input = [mixedFraction n | n <- input]
readInput   = takeWhile (/= [0,0]) . map (map read . words) . lines

main :: IO ()
main =
   interact (unlines . getFractions . readInput)
