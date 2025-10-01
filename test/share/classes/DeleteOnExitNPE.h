#ifndef _DeleteOnExitNPE_h_
#define _DeleteOnExitNPE_h_
//$ class DeleteOnExitNPE
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

class $export DeleteOnExitNPE : public ::java::lang::Runnable {
	$class(DeleteOnExitNPE, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DeleteOnExitNPE();
	void init$();
	static void doTest();
	static void main($StringArray* args);
	virtual void run() override;
	static void runTest();
};

#endif // _DeleteOnExitNPE_h_