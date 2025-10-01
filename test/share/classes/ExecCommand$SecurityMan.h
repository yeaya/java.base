#ifndef _ExecCommand$SecurityMan_h_
#define _ExecCommand$SecurityMan_h_
//$ class ExecCommand$SecurityMan
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

class $export ExecCommand$SecurityMan : public ::java::lang::SecurityManager {
	$class(ExecCommand$SecurityMan, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	ExecCommand$SecurityMan();
	using ::java::lang::SecurityManager::checkRead;
	void init$();
	virtual void checkDelete($String* file) override;
	virtual void checkExec($String* cmd) override;
	virtual void checkRead($String* file) override;
	static $String* unquote($String* str);
};

#endif // _ExecCommand$SecurityMan_h_