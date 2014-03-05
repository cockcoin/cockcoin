from distutils.core import setup
setup(name='ckcspendfrom',
      version='1.0',
      description='Command-line utility for cockcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@cockcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
