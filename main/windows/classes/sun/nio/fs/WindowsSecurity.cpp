#include <sun/nio/fs/WindowsSecurity.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <sun/nio/fs/WindowsException.h>
#include <sun/nio/fs/WindowsNativeDispatcher.h>
#include <sun/nio/fs/WindowsSecurity$Privilege.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WindowsException = ::sun::nio::fs::WindowsException;
using $WindowsNativeDispatcher = ::sun::nio::fs::WindowsNativeDispatcher;
using $WindowsSecurity$Privilege = ::sun::nio::fs::WindowsSecurity$Privilege;

namespace sun {
	namespace nio {
		namespace fs {

class WindowsSecurity$$Lambda$lambda$enablePrivilege$0 : public $WindowsSecurity$Privilege {
	$class(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, $NO_CLASS_INIT, $WindowsSecurity$Privilege)
public:
	void init$(int64_t token, bool stopImpersontating, bool needToRevert, int64_t pLuid) {
		this->token = token;
		this->stopImpersontating = stopImpersontating;
		this->needToRevert = needToRevert;
		this->pLuid = pLuid;
	}
	virtual void drop() override {
		WindowsSecurity::lambda$enablePrivilege$0(token, stopImpersontating, needToRevert, pLuid);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<WindowsSecurity$$Lambda$lambda$enablePrivilege$0>());
	}
	int64_t token = 0;
	bool stopImpersontating = false;
	bool needToRevert = false;
	int64_t pLuid = 0;
	static $FieldInfo fieldInfos[5];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo WindowsSecurity$$Lambda$lambda$enablePrivilege$0::fieldInfos[5] = {
	{"token", "J", nullptr, $PUBLIC, $field(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, token)},
	{"stopImpersontating", "Z", nullptr, $PUBLIC, $field(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, stopImpersontating)},
	{"needToRevert", "Z", nullptr, $PUBLIC, $field(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, needToRevert)},
	{"pLuid", "J", nullptr, $PUBLIC, $field(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, pLuid)},
	{}
};
$MethodInfo WindowsSecurity$$Lambda$lambda$enablePrivilege$0::methodInfos[3] = {
	{"<init>", "(JZZJ)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsSecurity$$Lambda$lambda$enablePrivilege$0::*)(int64_t,bool,bool,int64_t)>(&WindowsSecurity$$Lambda$lambda$enablePrivilege$0::init$))},
	{"drop", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo WindowsSecurity$$Lambda$lambda$enablePrivilege$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.fs.WindowsSecurity$$Lambda$lambda$enablePrivilege$0",
	"java.lang.Object",
	"sun.nio.fs.WindowsSecurity$Privilege",
	fieldInfos,
	methodInfos
};
$Class* WindowsSecurity$$Lambda$lambda$enablePrivilege$0::load$($String* name, bool initialize) {
	$loadClass(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* WindowsSecurity$$Lambda$lambda$enablePrivilege$0::class$ = nullptr;

$FieldInfo _WindowsSecurity_FieldInfo_[] = {
	{"processTokenWithDuplicateAccess", "J", nullptr, $STATIC | $FINAL, $staticField(WindowsSecurity, processTokenWithDuplicateAccess)},
	{"processTokenWithQueryAccess", "J", nullptr, $STATIC | $FINAL, $staticField(WindowsSecurity, processTokenWithQueryAccess)},
	{}
};

$MethodInfo _WindowsSecurity_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WindowsSecurity::*)()>(&WindowsSecurity::init$))},
	{"checkAccessMask", "(JIIIII)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int64_t,int32_t,int32_t,int32_t,int32_t,int32_t)>(&WindowsSecurity::checkAccessMask)), "sun.nio.fs.WindowsException"},
	{"enablePrivilege", "(Ljava/lang/String;)Lsun/nio/fs/WindowsSecurity$Privilege;", nullptr, $STATIC, $method(static_cast<$WindowsSecurity$Privilege*(*)($String*)>(&WindowsSecurity::enablePrivilege))},
	{"lambda$enablePrivilege$0", "(JZZJ)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int64_t,bool,bool,int64_t)>(&WindowsSecurity::lambda$enablePrivilege$0))},
	{"openProcessToken", "(I)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int32_t)>(&WindowsSecurity::openProcessToken))},
	{}
};

$InnerClassInfo _WindowsSecurity_InnerClassesInfo_[] = {
	{"sun.nio.fs.WindowsSecurity$Privilege", "sun.nio.fs.WindowsSecurity", "Privilege", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _WindowsSecurity_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.WindowsSecurity",
	"java.lang.Object",
	nullptr,
	_WindowsSecurity_FieldInfo_,
	_WindowsSecurity_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSecurity_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.fs.WindowsSecurity$Privilege"
};

$Object* allocate$WindowsSecurity($Class* clazz) {
	return $of($alloc(WindowsSecurity));
}

int64_t WindowsSecurity::processTokenWithDuplicateAccess = 0;
int64_t WindowsSecurity::processTokenWithQueryAccess = 0;

void WindowsSecurity::init$() {
}

int64_t WindowsSecurity::openProcessToken(int32_t access) {
	$init(WindowsSecurity);
	try {
		return $WindowsNativeDispatcher::OpenProcessToken($WindowsNativeDispatcher::GetCurrentProcess(), access);
	} catch ($WindowsException& x) {
		return 0;
	}
	$shouldNotReachHere();
}

$WindowsSecurity$Privilege* WindowsSecurity::enablePrivilege($String* priv) {
	$init(WindowsSecurity);
	int64_t pLuid = 0;
	try {
		pLuid = $WindowsNativeDispatcher::LookupPrivilegeValue(priv);
	} catch ($WindowsException& x) {
		$throwNew($AssertionError, $of(x));
	}
	int64_t hToken = 0;
	bool impersontating = false;
	bool elevated = false;
	try {
		hToken = $WindowsNativeDispatcher::OpenThreadToken($WindowsNativeDispatcher::GetCurrentThread(), 32, false);
		if (hToken == (int64_t)0 && WindowsSecurity::processTokenWithDuplicateAccess != (int64_t)0) {
			hToken = $WindowsNativeDispatcher::DuplicateTokenEx(WindowsSecurity::processTokenWithDuplicateAccess, (32 | 4));
			$WindowsNativeDispatcher::SetThreadToken(0, hToken);
			impersontating = true;
		}
		if (hToken != (int64_t)0) {
			$WindowsNativeDispatcher::AdjustTokenPrivileges(hToken, pLuid, 2);
			elevated = true;
		}
	} catch ($WindowsException& x) {
	}
	int64_t token = hToken;
	bool stopImpersontating = impersontating;
	bool needToRevert = elevated;
	return static_cast<$WindowsSecurity$Privilege*>($new(WindowsSecurity$$Lambda$lambda$enablePrivilege$0, token, stopImpersontating, needToRevert, pLuid));
}

bool WindowsSecurity::checkAccessMask(int64_t securityInfo, int32_t accessMask, int32_t genericRead, int32_t genericWrite, int32_t genericExecute, int32_t genericAll) {
	$init(WindowsSecurity);
	int32_t privileges = 8;
	int64_t hToken = $WindowsNativeDispatcher::OpenThreadToken($WindowsNativeDispatcher::GetCurrentThread(), privileges, false);
	if (hToken == (int64_t)0 && WindowsSecurity::processTokenWithDuplicateAccess != (int64_t)0) {
		hToken = $WindowsNativeDispatcher::DuplicateTokenEx(WindowsSecurity::processTokenWithDuplicateAccess, privileges);
	}
	bool hasRight = false;
	if (hToken != (int64_t)0) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				hasRight = $WindowsNativeDispatcher::AccessCheck(hToken, securityInfo, accessMask, genericRead, genericWrite, genericExecute, genericAll);
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$WindowsNativeDispatcher::CloseHandle(hToken);
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	return hasRight;
}

void WindowsSecurity::lambda$enablePrivilege$0(int64_t token, bool stopImpersontating, bool needToRevert, int64_t pLuid) {
	$init(WindowsSecurity);
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			if (token != (int64_t)0) {
				{
					$var($Throwable, var$1, nullptr);
					try {
						try {
							if (stopImpersontating) {
								$WindowsNativeDispatcher::SetThreadToken(0, 0);
							} else if (needToRevert) {
								$WindowsNativeDispatcher::AdjustTokenPrivileges(token, pLuid, 0);
							}
						} catch ($WindowsException& x) {
							$throwNew($AssertionError, $of(x));
						}
					} catch ($Throwable& var$2) {
						$assign(var$1, var$2);
					} /*finally*/ {
						$WindowsNativeDispatcher::CloseHandle(token);
					}
					if (var$1 != nullptr) {
						$throw(var$1);
					}
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} /*finally*/ {
			$WindowsNativeDispatcher::LocalFree(pLuid);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$WindowsSecurity($Class* class$) {
	WindowsSecurity::processTokenWithDuplicateAccess = WindowsSecurity::openProcessToken(2);
	WindowsSecurity::processTokenWithQueryAccess = WindowsSecurity::openProcessToken(8);
}

WindowsSecurity::WindowsSecurity() {
}

$Class* WindowsSecurity::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(WindowsSecurity$$Lambda$lambda$enablePrivilege$0::classInfo$.name)) {
			return WindowsSecurity$$Lambda$lambda$enablePrivilege$0::load$(name, initialize);
		}
	}
	$loadClass(WindowsSecurity, name, initialize, &_WindowsSecurity_ClassInfo_, clinit$WindowsSecurity, allocate$WindowsSecurity);
	return class$;
}

$Class* WindowsSecurity::class$ = nullptr;

		} // fs
	} // nio
} // sun