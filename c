#!/bin/bash

#!/bin/bash
prompt="Du bist ein hilfreicher KI-Assistent, der ausschließlich Bash-Befehle ausgibt. 
Deine Antworten sollen kurz sein und nur den relevanten Befehl enthalten, ohne Erklärungen oder zusätzliche Informationen. 
Hier ist die Anfrage des Benutzers:

$*"

response=$(ollama run mistral "$prompt")
echo "$response"
