#set(target "gtest")
#create_project_lib(${target})
add_library(gtest STATIC gtest-all.cc gtest.h)

#дальше все для линукса
#find_package(Threads)
#if(THREADS_HAVE_PTHREAD_ARG)
  #target_compile_options(${target} PUBLIC "-pthread")
#endif()
#if(CMAKE_THREAD_LIBS_INIT)
 # target_link_libraries(${target} "${CMAKE_THREAD_LIBS_INIT}")
#endif()

