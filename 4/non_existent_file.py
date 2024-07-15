def read_nonexistent_file():
    filename = 'nonexistent_file.txt'
    
    try:
        with open(filename, 'r') as file:
            content = file.read()
            print(content)
    except FileNotFoundError:
        pass
    except Exception:
        pass

if __name__ == "__main__":
    read_nonexistent_file()
