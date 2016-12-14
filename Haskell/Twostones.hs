stone :: Bool -> String
stone True = "Alice"
stone False = "Bob"

main = do
    input <- readLn :: IO Integer
    putStrLn . stone $ odd input
