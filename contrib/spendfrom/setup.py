from distutils.core import setup
setup(name='dstspendfrom',
      version='1.0',
      description='Command-line utility for stardust "coin control"',
      author='Gavin Andresen',
      author_email='gavin@stardustfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
