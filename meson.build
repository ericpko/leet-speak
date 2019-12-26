project('Leet Speak Converter', 'cpp',
  version : '0.1',
  default_options : ['c_std=c11', 'cpp_std=c++17'])

add_global_arguments(
  language : 'cpp')

inc = include_directories('include')

subdir('include')
subdir('src')

executable('leet_speak', 'main.cpp',
           include_directories : inc,
           link_with : srclib)
