from distutils.core import setup
setup(name='NAVspendfrom',
      version='1.0',
      description='Command-line utility for tenocoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@tenocoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
