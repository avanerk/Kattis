{-# LANGUAGE PatternGuards #-}
import Data.List

printStr :: String -> IO ()
printStr string | Just restOfString <- stripPrefix "Simon says" string = putStrLn restOfString
printStr _ = return ()

simonSays :: Integer -> IO ()
simonSays 0 = return ()
simonSays x = do
    line <- getLine
    printStr line
    simonSays (x-1)

main :: IO ()
main = do
    input <- readLn :: IO Integer
    simonSays input
