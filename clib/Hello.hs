module Hello where

hello :: IO ()
hello = putStrLn "hello"

foreign export ccall hello :: IO ()
