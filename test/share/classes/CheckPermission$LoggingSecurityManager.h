#ifndef _CheckPermission$LoggingSecurityManager_h_
#define _CheckPermission$LoggingSecurityManager_h_
//$ class CheckPermission$LoggingSecurityManager
//$ extends java.lang.SecurityManager

#include <java/lang/SecurityManager.h>

class CheckPermission$FileOperation;
namespace java {
	namespace security {
		class Permission;
	}
}

class $export CheckPermission$LoggingSecurityManager : public ::java::lang::SecurityManager {
	$class(CheckPermission$LoggingSecurityManager, $NO_CLASS_INIT, ::java::lang::SecurityManager)
public:
	CheckPermission$LoggingSecurityManager();
	using ::java::lang::SecurityManager::checkPermission;
	using ::java::lang::SecurityManager::checkRead;
	using ::java::lang::SecurityManager::checkWrite;
	void init$();
	virtual void checkDelete($String* file) override;
	virtual void checkExec($String* file) override;
	void checkFileOperation(::CheckPermission$FileOperation* op, $String* file);
	virtual void checkPermission(::java::security::Permission* perm) override;
	virtual void checkPropertyAccess($String* key) override;
	virtual void checkRead($String* file) override;
	virtual void checkWrite($String* file) override;
	static void install();
};

#endif // _CheckPermission$LoggingSecurityManager_h_