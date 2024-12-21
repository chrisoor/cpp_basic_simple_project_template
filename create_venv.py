import os
from pathlib import Path

script_path = Path(__file__)
print(script_path)
venv_path = script_path.parent.parent.joinpath("build").joinpath("venv")
print(venv_path)

if not venv_path.joinpath("pyvenv.cfg").is_file():
    print("Creating virtual environment ")
    os.system('python3 -m virtualenv ' + str(venv_path))
