/*
 *  Created by Phil on 22/10/2010.
 *  Copyright 2010 Two Blue Cubes Ltd
 *
 *  Distributed under the Boost Software License, Version 1.0. (See accompanying
 *  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#ifndef TWOBLUECUBES_CATCH_HPP_INCLUDED
#define TWOBLUECUBES_CATCH_HPP_INCLUDED

#ifdef __clang__
#    pragma clang system_header
#elif defined __GNUC__
#    pragma GCC system_header
#endif

#include "internal/catch_suppress_warnings.h"

#if defined(CATCH_CONFIG_MAIN) || defined(CATCH_CONFIG_RUNNER)
#  define CATCH_IMPL
#  define CATCH_CONFIG_EXTERNAL_INTERFACES
#  if defined(CATCH_CONFIG_DISABLE_MATCHERS)
#    undef CATCH_CONFIG_DISABLE_MATCHERS
#  endif
#endif

#include "internal/catch_platform.h"

#ifdef CATCH_IMPL
#  ifndef CLARA_CONFIG_MAIN
#    define CLARA_CONFIG_MAIN_NOT_DEFINED
#    define CLARA_CONFIG_MAIN
#  endif
#endif

#include "internal/catch_tag_alias_autoregistrar.h"
#include "internal/catch_test_registry.h"
#include "internal/catch_capture.hpp"
#include "internal/catch_section.h"
#include "internal/catch_benchmark.h"
#include "internal/catch_interfaces_exception.h"
#include "internal/catch_approx.h"
#include "internal/catch_compiler_capabilities.h"
#include "internal/catch_string_manip.h"

#ifndef CATCH_CONFIG_DISABLE_MATCHERS
#include "internal/catch_capture_matchers.h"
#endif

// These files are included here so the single_include script doesn't put them
// in the conditionally compiled sections
#include "internal/catch_test_case_info.h"
#include "internal/catch_interfaces_runner.h"

#ifdef __OBJC__
#include "internal/catch_objc.hpp"
#endif

#ifdef CATCH_CONFIG_EXTERNAL_INTERFACES
#include "internal/catch_external_interfaces.h"
#endif

#ifdef CATCH_IMPL
#include "internal/catch_impl.hpp"
#endif

#ifdef CATCH_CONFIG_MAIN
#include "internal/catch_default_main.hpp"
#endif


#ifdef CLARA_CONFIG_MAIN_NOT_DEFINED
#  undef CLARA_CONFIG_MAIN
#endif

#if !defined(CATCH_CONFIG_DISABLE)
//////
// If this config identifier is defined then all CATCH macros are prefixed with CATCH_
#ifdef CATCH_CONFIG_PREFIX_ALL

#define CATCH_REQUIRE( ... ) INTERNAL_CATCH_TEST( "CATCH_REQUIRE", Catch::ResultDisposition::Normal, __VA_ARGS__ )
#define CATCH_REQUIRE_FALSE( ... ) INTERNAL_CATCH_TEST( "CATCH_REQUIRE_FALSE", Catch::ResultDisposition::Normal | Catch::ResultDisposition::FalseTest, __VA_ARGS__ )

#define CATCH_REQUIRE_THROWS( ... ) INTERNAL_CATCH_THROWS( "CATCH_REQUIRE_THROWS", Catch::ResultDisposition::Normal, "", __VA_ARGS__ )
#define CATCH_REQUIRE_THROWS_AS( expr, exceptionType ) INTERNAL_CATCH_THROWS_AS( "CATCH_REQUIRE_THROWS_AS", exceptionType, Catch::ResultDisposition::Normal, expr )
#define CATCH_REQUIRE_THROWS_WITH( expr, matcher ) INTERNAL_CATCH_THROWS_STR_MATCHES( "CATCH_REQUIRE_THROWS_WITH", Catch::ResultDisposition::Normal, matcher, expr )
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CATCH_REQUIRE_THROWS_MATCHES( expr, exceptionType, matcher ) INTERNAL_CATCH_THROWS_MATCHES( "CATCH_REQUIRE_THROWS_MATCHES", exceptionType, Catch::ResultDisposition::Normal, matcher, expr )
#endif// CATCH_CONFIG_DISABLE_MATCHERS
#define CATCH_REQUIRE_NOTHROW( ... ) INTERNAL_CATCH_NO_THROW( "CATCH_REQUIRE_NOTHROW", Catch::ResultDisposition::Normal, __VA_ARGS__ )

#define CATCH_CHECK( ... ) INTERNAL_CATCH_TEST( "CATCH_CHECK", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CATCH_CHECK_FALSE( ... ) INTERNAL_CATCH_TEST( "CATCH_CHECK_FALSE", Catch::ResultDisposition::ContinueOnFailure | Catch::ResultDisposition::FalseTest, __VA_ARGS__ )
#define CATCH_CHECKED_IF( ... ) INTERNAL_CATCH_IF( "CATCH_CHECKED_IF", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CATCH_CHECKED_ELSE( ... ) INTERNAL_CATCH_ELSE( "CATCH_CHECKED_ELSE", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CATCH_CHECK_NOFAIL( ... ) INTERNAL_CATCH_TEST( "CATCH_CHECK_NOFAIL", Catch::ResultDisposition::ContinueOnFailure | Catch::ResultDisposition::SuppressFail, __VA_ARGS__ )

#define CATCH_CHECK_THROWS( ... )  INTERNAL_CATCH_THROWS( "CATCH_CHECK_THROWS", Catch::ResultDisposition::ContinueOnFailure, "", __VA_ARGS__ )
#define CATCH_CHECK_THROWS_AS( expr, exceptionType ) INTERNAL_CATCH_THROWS_AS( "CATCH_CHECK_THROWS_AS", exceptionType, Catch::ResultDisposition::ContinueOnFailure, expr )
#define CATCH_CHECK_THROWS_WITH( expr, matcher ) INTERNAL_CATCH_THROWS_STR_MATCHES( "CATCH_CHECK_THROWS_WITH", Catch::ResultDisposition::ContinueOnFailure, matcher, expr )
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CATCH_CHECK_THROWS_MATCHES( expr, exceptionType, matcher ) INTERNAL_CATCH_THROWS_MATCHES( "CATCH_CHECK_THROWS_MATCHES", exceptionType, Catch::ResultDisposition::ContinueOnFailure, matcher, expr )
#endif // CATCH_CONFIG_DISABLE_MATCHERS
#define CATCH_CHECK_NOTHROW( ... ) INTERNAL_CATCH_NO_THROW( "CATCH_CHECK_NOTHROW", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )

#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CATCH_CHECK_THAT( arg, matcher ) INTERNAL_CHECK_THAT( "CATCH_CHECK_THAT", matcher, Catch::ResultDisposition::ContinueOnFailure, arg )

#define CATCH_REQUIRE_THAT( arg, matcher ) INTERNAL_CHECK_THAT( "CATCH_REQUIRE_THAT", matcher, Catch::ResultDisposition::Normal, arg )
#endif // CATCH_CONFIG_DISABLE_MATCHERS

#define CATCH_INFO( msg ) INTERNAL_CATCH_INFO( "CATCH_INFO", msg )
#define CATCH_WARN( msg ) INTERNAL_CATCH_MSG( "CATCH_WARN", Catch::ResultWas::Warning, Catch::ResultDisposition::ContinueOnFailure, msg )
#define CATCH_CAPTURE( msg ) INTERNAL_CATCH_INFO( "CATCH_CAPTURE", #msg " := " << ::Catch::Detail::stringify(msg) )

#define CATCH_TEST_CASE( ... ) INTERNAL_CATCH_TESTCASE( __VA_ARGS__ )
#define CATCH_TEST_CASE_METHOD( className, ... ) INTERNAL_CATCH_TEST_CASE_METHOD( className, __VA_ARGS__ )
#define CATCH_METHOD_AS_TEST_CASE( method, ... ) INTERNAL_CATCH_METHOD_AS_TEST_CASE( method, __VA_ARGS__ )
#define CATCH_REGISTER_TEST_CASE( Function, ... ) INTERNAL_CATCH_REGISTER_TESTCASE( Function, __VA_ARGS__ )
#define CATCH_SECTION( ... ) INTERNAL_CATCH_SECTION( __VA_ARGS__ )
#define CATCH_FAIL( ... ) INTERNAL_CATCH_MSG( "CATCH_FAIL", Catch::ResultWas::ExplicitFailure, Catch::ResultDisposition::Normal, __VA_ARGS__ )
#define CATCH_FAIL_CHECK( ... ) INTERNAL_CATCH_MSG( "CATCH_FAIL_CHECK", Catch::ResultWas::ExplicitFailure, Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CATCH_SUCCEED( ... ) INTERNAL_CATCH_MSG( "CATCH_SUCCEED", Catch::ResultWas::Ok, Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )

#define CATCH_ANON_TEST_CASE() INTERNAL_CATCH_TESTCASE()

// "BDD-style" convenience wrappers
#define CATCH_SCENARIO( ... ) CATCH_TEST_CASE( "Scenario: " __VA_ARGS__ )
#define CATCH_SCENARIO_METHOD( className, ... ) INTERNAL_CATCH_TEST_CASE_METHOD( className, "Scenario: " __VA_ARGS__ )
#define CATCH_GIVEN( desc )    CATCH_SECTION( std::string( "Given: ") + desc )
#define CATCH_WHEN( desc )     CATCH_SECTION( std::string( " When: ") + desc )
#define CATCH_AND_WHEN( desc ) CATCH_SECTION( std::string( "  And: ") + desc )
#define CATCH_THEN( desc )     CATCH_SECTION( std::string( " Then: ") + desc )
#define CATCH_AND_THEN( desc ) CATCH_SECTION( std::string( "  And: ") + desc )

// If CATCH_CONFIG_PREFIX_ALL is not defined then the CATCH_ prefix is not required
#else

#define REQUIRE( ... ) INTERNAL_CATCH_TEST( "REQUIRE", Catch::ResultDisposition::Normal, __VA_ARGS__  )
#define REQUIRE_FALSE( ... ) INTERNAL_CATCH_TEST( "REQUIRE_FALSE", Catch::ResultDisposition::Normal | Catch::ResultDisposition::FalseTest, __VA_ARGS__ )

#define REQUIRE_THROWS( ... ) INTERNAL_CATCH_THROWS( "REQUIRE_THROWS", Catch::ResultDisposition::Normal, __VA_ARGS__ )
#define REQUIRE_THROWS_AS( expr, exceptionType ) INTERNAL_CATCH_THROWS_AS( "REQUIRE_THROWS_AS", exceptionType, Catch::ResultDisposition::Normal, expr )
#define REQUIRE_THROWS_WITH( expr, matcher ) INTERNAL_CATCH_THROWS_STR_MATCHES( "REQUIRE_THROWS_WITH", Catch::ResultDisposition::Normal, matcher, expr )
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define REQUIRE_THROWS_MATCHES( expr, exceptionType, matcher ) INTERNAL_CATCH_THROWS_MATCHES( "REQUIRE_THROWS_MATCHES", exceptionType, Catch::ResultDisposition::Normal, matcher, expr )
#endif // CATCH_CONFIG_DISABLE_MATCHERS
#define REQUIRE_NOTHROW( ... ) INTERNAL_CATCH_NO_THROW( "REQUIRE_NOTHROW", Catch::ResultDisposition::Normal, __VA_ARGS__ )

#define CHECK( ... ) INTERNAL_CATCH_TEST( "CHECK", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CHECK_FALSE( ... ) INTERNAL_CATCH_TEST( "CHECK_FALSE", Catch::ResultDisposition::ContinueOnFailure | Catch::ResultDisposition::FalseTest, __VA_ARGS__ )
#define CHECKED_IF( ... ) INTERNAL_CATCH_IF( "CHECKED_IF", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CHECKED_ELSE( ... ) INTERNAL_CATCH_ELSE( "CHECKED_ELSE", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CHECK_NOFAIL( ... ) INTERNAL_CATCH_TEST( "CHECK_NOFAIL", Catch::ResultDisposition::ContinueOnFailure | Catch::ResultDisposition::SuppressFail, __VA_ARGS__ )

#define CHECK_THROWS( ... )  INTERNAL_CATCH_THROWS( "CHECK_THROWS", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define CHECK_THROWS_AS( expr, exceptionType ) INTERNAL_CATCH_THROWS_AS( "CHECK_THROWS_AS", exceptionType, Catch::ResultDisposition::ContinueOnFailure, expr )
#define CHECK_THROWS_WITH( expr, matcher ) INTERNAL_CATCH_THROWS_STR_MATCHES( "CHECK_THROWS_WITH", Catch::ResultDisposition::ContinueOnFailure, matcher, expr )
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CHECK_THROWS_MATCHES( expr, exceptionType, matcher ) INTERNAL_CATCH_THROWS_MATCHES( "CHECK_THROWS_MATCHES", exceptionType, Catch::ResultDisposition::ContinueOnFailure, matcher, expr )
#endif // CATCH_CONFIG_DISABLE_MATCHERS
#define CHECK_NOTHROW( ... ) INTERNAL_CATCH_NO_THROW( "CHECK_NOTHROW", Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )


#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CHECK_THAT( arg, matcher ) INTERNAL_CHECK_THAT( "CHECK_THAT", matcher, Catch::ResultDisposition::ContinueOnFailure, arg )

#define REQUIRE_THAT( arg, matcher ) INTERNAL_CHECK_THAT( "REQUIRE_THAT", matcher, Catch::ResultDisposition::Normal, arg )
#endif // CATCH_CONFIG_DISABLE_MATCHERS

#define INFO( msg ) INTERNAL_CATCH_INFO( "INFO", msg )
#define WARN( msg ) INTERNAL_CATCH_MSG( "WARN", Catch::ResultWas::Warning, Catch::ResultDisposition::ContinueOnFailure, msg )
#define CAPTURE( msg ) INTERNAL_CATCH_INFO( "CAPTURE", #msg " := " << ::Catch::Detail::stringify(msg) )

#define TEST_CASE( ... ) INTERNAL_CATCH_TESTCASE( __VA_ARGS__ )
#define TEST_CASE_METHOD( className, ... ) INTERNAL_CATCH_TEST_CASE_METHOD( className, __VA_ARGS__ )
#define METHOD_AS_TEST_CASE( method, ... ) INTERNAL_CATCH_METHOD_AS_TEST_CASE( method, __VA_ARGS__ )
#define REGISTER_TEST_CASE( Function, ... ) INTERNAL_CATCH_REGISTER_TESTCASE( Function, __VA_ARGS__ )
#define SECTION( ... ) INTERNAL_CATCH_SECTION( __VA_ARGS__ )
#define FAIL( ... ) INTERNAL_CATCH_MSG( "FAIL", Catch::ResultWas::ExplicitFailure, Catch::ResultDisposition::Normal, __VA_ARGS__ )
#define FAIL_CHECK( ... ) INTERNAL_CATCH_MSG( "FAIL_CHECK", Catch::ResultWas::ExplicitFailure, Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define SUCCEED( ... ) INTERNAL_CATCH_MSG( "SUCCEED", Catch::ResultWas::Ok, Catch::ResultDisposition::ContinueOnFailure, __VA_ARGS__ )
#define ANON_TEST_CASE() INTERNAL_CATCH_TESTCASE()

#endif

#define CATCH_TRANSLATE_EXCEPTION( signature ) INTERNAL_CATCH_TRANSLATE_EXCEPTION( signature )

// "BDD-style" convenience wrappers
#define SCENARIO( ... ) TEST_CASE( "Scenario: " __VA_ARGS__ )
#define SCENARIO_METHOD( className, ... ) INTERNAL_CATCH_TEST_CASE_METHOD( className, "Scenario: " __VA_ARGS__ )

#define GIVEN( desc )    SECTION( std::string("   Given: ") + desc )
#define WHEN( desc )     SECTION( std::string("    When: ") + desc )
#define AND_WHEN( desc ) SECTION( std::string("And when: ") + desc )
#define THEN( desc )     SECTION( std::string("    Then: ") + desc )
#define AND_THEN( desc ) SECTION( std::string("     And: ") + desc )

using Catch::Detail::Approx;

#else
//////
// If this config identifier is defined then all CATCH macros are prefixed with CATCH_
#ifdef CATCH_CONFIG_PREFIX_ALL

#define CATCH_REQUIRE( ... )        (void)(0)
#define CATCH_REQUIRE_FALSE( ... )  (void)(0)

#define CATCH_REQUIRE_THROWS( ... ) (void)(0)
#define CATCH_REQUIRE_THROWS_AS( expr, exceptionType ) (void)(0)
#define CATCH_REQUIRE_THROWS_WITH( expr, matcher )     (void)(0)
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CATCH_REQUIRE_THROWS_MATCHES( expr, exceptionType, matcher ) (void)(0)
#endif// CATCH_CONFIG_DISABLE_MATCHERS
#define CATCH_REQUIRE_NOTHROW( ... ) (void)(0)

#define CATCH_CHECK( ... )         (void)(0)
#define CATCH_CHECK_FALSE( ... )   (void)(0)
#define CATCH_CHECKED_IF( ... )    if (__VA_ARGS__)
#define CATCH_CHECKED_ELSE( ... )  if (!(__VA_ARGS__))
#define CATCH_CHECK_NOFAIL( ... )  (void)(0)

#define CATCH_CHECK_THROWS( ... )  (void)(0)
#define CATCH_CHECK_THROWS_AS( expr, exceptionType ) (void)(0)
#define CATCH_CHECK_THROWS_WITH( expr, matcher )     (void)(0)
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CATCH_CHECK_THROWS_MATCHES( expr, exceptionType, matcher ) (void)(0)
#endif // CATCH_CONFIG_DISABLE_MATCHERS
#define CATCH_CHECK_NOTHROW( ... ) (void)(0)

#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CATCH_CHECK_THAT( arg, matcher )   (void)(0)

#define CATCH_REQUIRE_THAT( arg, matcher ) (void)(0)
#endif // CATCH_CONFIG_DISABLE_MATCHERS

#define CATCH_INFO( msg )    (void)(0)
#define CATCH_WARN( msg )    (void)(0)
#define CATCH_CAPTURE( msg ) (void)(0)

#define CATCH_TEST_CASE( ... ) INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))
#define CATCH_TEST_CASE_METHOD( className, ... ) INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))
#define CATCH_METHOD_AS_TEST_CASE( method, ... )
#define CATCH_REGISTER_TEST_CASE( Function, ... ) (void)(0)
#define CATCH_SECTION( ... )
#define CATCH_FAIL( ... ) (void)(0)
#define CATCH_FAIL_CHECK( ... ) (void)(0)
#define CATCH_SUCCEED( ... ) (void)(0)

#define CATCH_ANON_TEST_CASE() INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))

// "BDD-style" convenience wrappers
#define CATCH_SCENARIO( ... ) INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))
#define CATCH_SCENARIO_METHOD( className, ... ) INTERNAL_CATCH_TESTCASE_METHOD_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ), className )
#define CATCH_GIVEN( desc )
#define CATCH_WHEN( desc )
#define CATCH_AND_WHEN( desc )
#define CATCH_THEN( desc )
#define CATCH_AND_THEN( desc )

// If CATCH_CONFIG_PREFIX_ALL is not defined then the CATCH_ prefix is not required
#else

#define REQUIRE( ... )       (void)(0)
#define REQUIRE_FALSE( ... ) (void)(0)

#define REQUIRE_THROWS( ... ) (void)(0)
#define REQUIRE_THROWS_AS( expr, exceptionType ) (void)(0)
#define REQUIRE_THROWS_WITH( expr, matcher ) (void)(0)
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define REQUIRE_THROWS_MATCHES( expr, exceptionType, matcher ) (void)(0)
#endif // CATCH_CONFIG_DISABLE_MATCHERS
#define REQUIRE_NOTHROW( ... ) (void)(0)

#define CHECK( ... ) (void)(0)
#define CHECK_FALSE( ... ) (void)(0)
#define CHECKED_IF( ... ) if (__VA_ARGS__)
#define CHECKED_ELSE( ... ) if (!(__VA_ARGS__))
#define CHECK_NOFAIL( ... ) (void)(0)

#define CHECK_THROWS( ... )  (void)(0)
#define CHECK_THROWS_AS( expr, exceptionType ) (void)(0)
#define CHECK_THROWS_WITH( expr, matcher ) (void)(0)
#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CHECK_THROWS_MATCHES( expr, exceptionType, matcher ) (void)(0)
#endif // CATCH_CONFIG_DISABLE_MATCHERS
#define CHECK_NOTHROW( ... ) (void)(0)


#if !defined(CATCH_CONFIG_DISABLE_MATCHERS)
#define CHECK_THAT( arg, matcher ) (void)(0)

#define REQUIRE_THAT( arg, matcher ) (void)(0)
#endif // CATCH_CONFIG_DISABLE_MATCHERS

#define INFO( msg ) (void)(0)
#define WARN( msg ) (void)(0)
#define CAPTURE( msg ) (void)(0)

#define TEST_CASE( ... )  INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))
#define TEST_CASE_METHOD( className, ... ) INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))
#define METHOD_AS_TEST_CASE( method, ... )
#define REGISTER_TEST_CASE( Function, ... ) (void)(0)
#define SECTION( ... )
#define FAIL( ... ) (void)(0)
#define FAIL_CHECK( ... ) (void)(0)
#define SUCCEED( ... ) (void)(0)
#define ANON_TEST_CASE() INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ))

#endif

#define CATCH_TRANSLATE_EXCEPTION( signature ) INTERNAL_CATCH_TRANSLATE_EXCEPTION_NO_REG( INTERNAL_CATCH_UNIQUE_NAME( catch_internal_ExceptionTranslator ), signature )

// "BDD-style" convenience wrappers
#define SCENARIO( ... ) INTERNAL_CATCH_TESTCASE_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ) )
#define SCENARIO_METHOD( className, ... ) INTERNAL_CATCH_TESTCASE_METHOD_NO_REGISTRATION(INTERNAL_CATCH_UNIQUE_NAME( ____C_A_T_C_H____T_E_S_T____ ), className )

#define GIVEN( desc )
#define WHEN( desc )
#define AND_WHEN( desc )
#define THEN( desc )
#define AND_THEN( desc )

using Catch::Detail::Approx;


#endif

#include "internal/catch_reenable_warnings.h"

#endif // TWOBLUECUBES_CATCH_HPP_INCLUDED
