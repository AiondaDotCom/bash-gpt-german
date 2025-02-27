# Bash GPT German

## Projektbeschreibung

Dieses Projekt enthält ein Bash-Skript, das als KI-Assistent fungiert und ausschließlich Bash-Befehle ausgibt. Die Antworten des Assistenten sind kurz und enthalten nur den relevanten Befehl, ohne Erklärungen oder zusätzliche Informationen.

## Nutzung

Um das Skript zu verwenden, führen Sie den folgenden Befehl im Terminal aus:

```bash
./c <Ihre Anfrage>
```

Ersetzen Sie `<Ihre Anfrage>` durch die spezifische Anfrage, die Sie an den KI-Assistenten stellen möchten.

### Skript in `~/bin` verschieben und dauerhaft verfügbar machen

Um das Skript `c` systemweit verfügbar zu machen, kopieren Sie es nach `~/bin`:

```bash
mkdir -p ~/bin
cp c ~/bin/
chmod +x ~/bin/c
```

Falls `~/bin` noch nicht im `PATH` enthalten ist, fügen Sie es hinzu, indem Sie folgende Zeilen zu Ihrer `~/.bash_profile` oder `~/.bashrc` hinzufügen:

```bash
export PATH="$HOME/bin:$PATH"
```

Anschließend laden Sie die geänderte Konfiguration neu:

```bash
source ~/.bash_profile  # oder source ~/.bashrc
```

Nun können Sie das Skript von überall im Terminal mit folgendem Befehl aufrufen:

```bash
c <Ihre Anfrage>
```

## Installation von Ollama

Um dieses Skript verwenden zu können, muss `ollama` auf Ihrem System installiert sein. Sie können `ollama` mit den folgenden Shell-Befehlen installieren:

```bash
# Für Debian/Ubuntu-basierte Systeme
sudo apt-get update
sudo apt-get install ollama

# Für Red Hat/CentOS-basierte Systeme
sudo yum update
sudo yum install ollama

# Für macOS
brew update
brew install ollama
```

## Lizenz

Dieses Projekt ist unter der BSD 2-Clause License lizenziert. Weitere Informationen finden Sie in der Datei `LICENSE`.
