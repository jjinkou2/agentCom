
import Agentsvr3
import System.Win32.Com
import Data.Int

slow :: Int32
slow = 0

main = coRun $ do
                server <- coCreateObject "Agent.Server" iidIAgent
                (charID,_) <- server # iAgent_Load path

                merl <- server # iAgent_GetCharacter charID
                putStrLn "test"
                --merl #  iAgentCharacter_Show slow
        where
                path = "c:\\Windows\\MSAgent\\chars\\merlin.acs"
