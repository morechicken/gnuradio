#ifndef INCLUDED_QA_32FC_CONJUGATE_DOT_PROD_UNALIGNED_H
#define INCLUDED_QA_32FC_CONJUGATE_DOT_PROD_UNALIGNED_H

#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/TestCase.h>

class qa_32fc_conjugate_dot_prod_unaligned : public CppUnit::TestCase {

  CPPUNIT_TEST_SUITE (qa_32fc_conjugate_dot_prod_unaligned);
  CPPUNIT_TEST (t1);
  CPPUNIT_TEST_SUITE_END ();

 private:
  void t1 ();
};


#endif /* INCLUDED_QA_32FC_CONJUGATE_DOT_PROD_UNALIGNED_H */
