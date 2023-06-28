add_library(MathFunctions MathFunctions.cxx)

# Default to using my math lib
option(USE_MYMATH "Use tutorial provided math implementation" ON)

if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
endif()

add_library(SqrtLibrary STATIC mysqrt.cxx)

target_link_libraries(MathFunctions PUBLIC SqrtLibrary)
