#include <metal.hpp>

#include "test.hpp"

#define MATRIX(M, N) \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, VALUE(M) COMMA(N) VALUES(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, VALUE(M) COMMA(N) NUMBERS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, VALUE(M) COMMA(N) PAIRS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, VALUE(M) COMMA(N) LISTS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, VALUE(M) COMMA(N) MAPS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, VALUE(M) COMMA(N) LAMBDAS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, NUMBER(M) COMMA(N) VALUES(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, NUMBER(M) COMMA(N) NUMBERS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, NUMBER(M) COMMA(N) PAIRS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, NUMBER(M) COMMA(N) LISTS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, NUMBER(M) COMMA(N) MAPS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, NUMBER(M) COMMA(N) LAMBDAS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, PAIR(M) COMMA(N) VALUES(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, PAIR(M) COMMA(N) NUMBERS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, PAIR(M) COMMA(N) PAIRS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, PAIR(M) COMMA(N) LISTS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, PAIR(M) COMMA(N) MAPS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, PAIR(M) COMMA(N) LAMBDAS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LIST(M) COMMA(N) VALUES(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LIST(M) COMMA(N) NUMBERS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LIST(M) COMMA(N) PAIRS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LIST(M) COMMA(N) LISTS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LIST(M) COMMA(N) MAPS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LIST(M) COMMA(N) LAMBDAS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, MAP(M) COMMA(N) VALUES(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, MAP(M) COMMA(N) NUMBERS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, MAP(M) COMMA(N) PAIRS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, MAP(M) COMMA(N) LISTS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, MAP(M) COMMA(N) MAPS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, MAP(M) COMMA(N) LAMBDAS(N)>), (FALSE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(M) COMMA(N) VALUES(N)>), (BOOL(M == N))); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(M) COMMA(N) NUMBERS(N)>), (BOOL(M == N))); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(M) COMMA(N) PAIRS(N)>), (BOOL(M == N))); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(M) COMMA(N) LISTS(N)>), (BOOL(M == N))); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(M) COMMA(N) MAPS(N)>), (BOOL(M == N))); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(M) COMMA(N) LAMBDAS(N)>), (BOOL(M == N))); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(_) COMMA(N) VALUES(N)>), (TRUE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(_) COMMA(N) NUMBERS(N)>), (TRUE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(_) COMMA(N) PAIRS(N)>), (TRUE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(_) COMMA(N) LISTS(N)>), (TRUE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(_) COMMA(N) MAPS(N)>), (TRUE)); \
    CHECK((metal::is_invocable<metal::lambda<metal::invoke>, LAMBDA(_) COMMA(N) LAMBDAS(N)>), (TRUE)); \
    CHECK((metal::invoke<LAMBDA(M) COMMA(M) VALUES(M)>), (EXPR(M)<VALUES(M)>)); \
    CHECK((metal::invoke<LAMBDA(_) COMMA(M) VALUES(M)>), (EXPR(_)<VALUES(M)>)); \
    CHECK((metal::invoke<LAMBDA(M) COMMA(M) LAMBDAS(M)>), (EXPR(M)<LAMBDAS(M)>)); \
    CHECK((metal::invoke<LAMBDA(_) COMMA(M) LAMBDAS(M)>), (EXPR(_)<LAMBDAS(M)>)); \
/**/

GEN(MATRIX)
