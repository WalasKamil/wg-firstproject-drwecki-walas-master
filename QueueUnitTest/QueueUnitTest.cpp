#include "pch.h"
#include "CppUnitTest.h"
#include "../QueueLib/Queue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace QueueUnitTest
{
	TEST_CLASS(QueueUnitTest)
	{
	public:

		TEST_METHOD(TestInsert)
		{			
			Queue q;
			Assert::AreEqual(0, q.count());
			q.insert(7);
			Assert::AreEqual(1, q.count());
			Assert::AreEqual(7, q.remove());
			Assert::AreEqual(0, q.count());

			q.insert(3);
			q.insert(2);
			q.insert(5);
			q.insert(4);
			
			Assert::AreEqual(3, q.remove());
			Assert::AreEqual(2, q.remove());
			Assert::AreEqual(5, q.remove());
			Assert::AreEqual(4, q.remove());
			Assert::AreEqual(0, q.count());
		}
	
		TEST_METHOD(InsertOneElement)
		{
			
			Queue q;
			Assert::AreEqual(0, q.count());
			q.insert(3);
			Assert::AreEqual(1, q.count());
			Assert::AreEqual(3, q.remove());
			Assert::AreEqual(0, q.count());
			
		}
		TEST_METHOD(Operator_addition_int)
		{
			Queue q,z;
			q.insert(1);
			q.insert(2);
			q.insert(3);
			//321
			Assert::AreEqual(3, q.count());
			z = q + 4;
			Assert::AreEqual(5, z.remove());
			Assert::AreEqual(6, z.remove());
			Assert::AreEqual(7, z.remove());
			Assert::AreEqual(0, z.count());
		}
		TEST_METHOD(Operator_addition_queue)
		{
			Queue q, z, x;
			q.insert(1);
			q.insert(2);
			z.insert(3);
			z.insert(4);
				//2,1+4,3					
			x = q + z;
			Assert::AreEqual(1, x.remove());
			Assert::AreEqual(2, x.remove());
			Assert::AreEqual(3, x.remove());
			Assert::AreEqual(4, x.remove());
		}
		TEST_METHOD(Operator_subtraction_int)
		{
			Queue q, z;
			q.insert(1);
			q.insert(2);
			q.insert(3);
			//3,2,1
			Assert::AreEqual(3, q.count());
			z = q - 4;
			Assert::AreEqual(-3, z.remove());
			Assert::AreEqual(-2, z.remove());
			Assert::AreEqual(-1, z.remove());
			Assert::AreEqual(0, z.count());
		}
		TEST_METHOD(Operator_multiplication_int)
		{
			Queue q, z;
			q.insert(1);
			q.insert(2);
			q.insert(3);
			//3,2,1
			Assert::AreEqual(3, q.count());
			z = q * 4;
			Assert::AreEqual(4, z.remove());
			Assert::AreEqual(8, z.remove());
			Assert::AreEqual(12, z.remove());
			Assert::AreEqual(0, z.count());
		}
		TEST_METHOD(Operator_division_int)
		{
			Queue q, z;
			q.insert(6);
			q.insert(8);
			q.insert(12);
			//12,8,6
			Assert::AreEqual(3, q.count());
			z = q / 2;
			Assert::AreEqual(3, z.remove());
			Assert::AreEqual(4, z.remove());
			Assert::AreEqual(6, z.remove());
			Assert::AreEqual(0, z.count());
		}
		TEST_METHOD(Operator_test1)
		{
			Queue q;
			q.insert(6);
			q.insert(8);
			q.insert(12);
			
			//Assert::AreEqual(3, q.count());
			q+=2;
			Assert::AreEqual(8, q.remove());
			Assert::AreEqual(10, q.remove());
			Assert::AreEqual(14, q.remove());
			//Assert::AreEqual(0, q.count());
		}
		TEST_METHOD(Operator_test2)
		{
			Queue q;
			q.insert(6);
			q.insert(8);
			q.insert(12);
		//12,8,6,12,8,6

			Assert::AreEqual(3, q.count());
			q += q;
			Assert::AreEqual(6, q.remove());
			Assert::AreEqual(8, q.remove());
			Assert::AreEqual(12, q.remove());
			Assert::AreEqual(6, q.remove());
			Assert::AreEqual(8, q.remove());
			Assert::AreEqual(12, q.remove());
			Assert::AreEqual(0, q.count());
		}
		
		TEST_METHOD(Operator_test3)
		{
			Queue q;
			q.insert(6);
			q.insert(8);
			q.insert(12);

			Assert::AreEqual(3, q.count());
			q *= 2;
			Assert::AreEqual(12, q.remove());
			Assert::AreEqual(16, q.remove());
			Assert::AreEqual(24, q.remove());
			Assert::AreEqual(0, q.count());
		}
		
		TEST_METHOD(Operator_test4)
		{
			Queue q;
			q.insert(6);
			q.insert(8);
			q.insert(12);

			
			q /= 2;
			Assert::AreEqual(3, q.remove());
			Assert::AreEqual(4, q.remove());
			Assert::AreEqual(6, q.remove());
			
		}
		TEST_METHOD(Operator_test5)
		{
			Queue q;
			q.insert(6);
			q.insert(8);
			q.insert(12);

			
			q -= 2;
			Assert::AreEqual(4, q.remove());
			Assert::AreEqual(6, q.remove());
			Assert::AreEqual(10, q.remove());
			
		}
		
	};
}
