#define BOOST_TEST_MODULE RbtTest
#include <boost/test/unit_test.hpp>

#include "rbt.h"
#include <memory>
using  namespace std;

BOOST_AUTO_TEST_CASE(constructor_test) {
    shared_ptr<Rbt> rbt = make_shared<Rbt>();
    BOOST_CHECK(rbt != nullptr);

}
