srcdir = '.' 
blddir = './build' 
def options(opt):
	opt.load('compiler_c')
def configure(conf):
	conf.load('compiler_c')
def build(bld):
	bld.program(source='main.c', target='hello', use='fun')
	bld.objects(source='fun.c', target='fun')
	
