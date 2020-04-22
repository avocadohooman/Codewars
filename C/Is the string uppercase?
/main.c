#include <criterion/criterion.h>

int is_uppercase(const char *source);

Test(ExampleTests, ShouldPassAllTheTestsProvided) {
  {
    const char *source = "c";
    const bool expected = false;
    const bool actual = is_uppercase(source);
    cr_assert_eq(
		 expected, actual, "\"%s\" Expected: %s Actual: %s", 
		 source, expected ? "is uppercase" : "is not uppercase", 
		 actual ? "is uppercase" : "is not uppercase");
  }
  
  {
    const char *source = "C";
    const bool expected = true;
    const bool actual = is_uppercase(source);
    cr_assert_eq(
		 expected, actual, "\"%s\" Expected: %s Actual: %s", 
		 source, expected ? "is uppercase" : "is not uppercase", 
		 actual ? "is uppercase" : "is not uppercase");
  }
  
  {
    const char *source = "hello I AM DONALD";
    const bool expected = false;
    const bool actual = is_uppercase(source);
    cr_assert_eq(
		 expected, actual, "\"%s\" Expected: %s Actual: %s", 
		 source, expected ? "is uppercase" : "is not uppercase", 
		 actual ? "is uppercase" : "is not uppercase");
  }
  
  {
    const char *source = "HELLO I AM DONALD";
    const bool expected = true;
    const bool actual = is_uppercase(source);
    cr_assert_eq(
		 expected, actual, "\"%s\" Expected: %s Actual: %s", 
		 source, expected ? "is uppercase" : "is not uppercase", 
		 actual ? "is uppercase" : "is not uppercase");
  }
  
  {
    const char *source = "ACSKLDFJSgSKLDFJSKLDFJ";
    const bool expected = false;
    const bool actual = is_uppercase(source);
    cr_assert_eq(
		 expected, actual, "\"%s\" Expected: %s Actual: %s", 
		 source, expected ? "is uppercase" : "is not uppercase", 
		 actual ? "is uppercase" : "is not uppercase");
  }
  
  {
    const char *source = "ACSKLDFJSGSKLDFJSKLDFJ";
    const bool expected = true;
    const bool actual = is_uppercase(source);
    cr_assert_eq(
		 expected, actual, "\"%s\" Expected: %s Actual: %s", 
		 source, expected ? "is uppercase" : "is not uppercase", 
		 actual ? "is uppercase" : "is not uppercase");
  }
}
