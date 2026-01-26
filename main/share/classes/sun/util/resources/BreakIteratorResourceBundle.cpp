#include <sun/util/resources/BreakIteratorResourceBundle.h>

#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/ResourceBundle.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef NON_DATA_KEYS

using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $ResourceBundle = ::java::util::ResourceBundle;
using $Set = ::java::util::Set;

namespace sun {
	namespace util {
		namespace resources {

class BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0 : public $PrivilegedExceptionAction {
	$class(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(BreakIteratorResourceBundle* inst, $String* path) {
		$set(this, inst$, inst);
		$set(this, path, path);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$getResourceAsStream$0(path));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0>());
	}
	BreakIteratorResourceBundle* inst$ = nullptr;
	$String* path = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, inst$)},
	{"path", "Ljava/lang/String;", nullptr, $PUBLIC, $field(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, path)},
	{}
};
$MethodInfo BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::methodInfos[3] = {
	{"<init>", "(Lsun/util/resources/BreakIteratorResourceBundle;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, init$, void, BreakIteratorResourceBundle*, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, run, $Object*)},
	{}
};
$ClassInfo BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.util.resources.BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::class$ = nullptr;

$FieldInfo _BreakIteratorResourceBundle_FieldInfo_[] = {
	{"NON_DATA_KEYS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BreakIteratorResourceBundle, NON_DATA_KEYS)},
	{"keys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $VOLATILE, $field(BreakIteratorResourceBundle, keys)},
	{}
};

$MethodInfo _BreakIteratorResourceBundle_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorResourceBundle, init$, void)},
	{"getBreakIteratorInfo", "()Ljava/util/ResourceBundle;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BreakIteratorResourceBundle, getBreakIteratorInfo, $ResourceBundle*)},
	{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(BreakIteratorResourceBundle, getKeys, $Enumeration*)},
	{"getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(BreakIteratorResourceBundle, getResourceAsStream, $InputStream*, $String*), "java.lang.Exception"},
	{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(BreakIteratorResourceBundle, handleGetObject, $Object*, $String*)},
	{"handleKeySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED, $virtualMethod(BreakIteratorResourceBundle, handleKeySet, $Set*)},
	{"lambda$getResourceAsStream$0", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $SYNTHETIC, $method(BreakIteratorResourceBundle, lambda$getResourceAsStream$0, $InputStream*, $String*), "java.lang.Exception"},
	{}
};

$ClassInfo _BreakIteratorResourceBundle_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.resources.BreakIteratorResourceBundle",
	"java.util.ResourceBundle",
	nullptr,
	_BreakIteratorResourceBundle_FieldInfo_,
	_BreakIteratorResourceBundle_MethodInfo_
};

$Object* allocate$BreakIteratorResourceBundle($Class* clazz) {
	return $of($alloc(BreakIteratorResourceBundle));
}

$Set* BreakIteratorResourceBundle::NON_DATA_KEYS = nullptr;

void BreakIteratorResourceBundle::init$() {
	$ResourceBundle::init$();
}

$Object* BreakIteratorResourceBundle::handleGetObject($String* key) {
	$useLocalCurrentObjectStackCache();
	if ($nc(BreakIteratorResourceBundle::NON_DATA_KEYS)->contains(key)) {
		return $of(nullptr);
	}
	$var($ResourceBundle, info, getBreakIteratorInfo());
	if (!$nc(info)->containsKey(key)) {
		return $of(nullptr);
	}
	$var($String, var$0, $$str({$($nc($($of(this)->getClass()->getPackageName()))->replace(u'.', u'/')), $$str(u'/')}));
	$var($String, path, $concat(var$0, $($nc(info)->getString(key))));
	$var($bytes, data, nullptr);
	try {
		$var($InputStream, is, getResourceAsStream(path));
		{
			$var($Throwable, var$1, nullptr);
			try {
				try {
					$assign(data, $nc(is)->readAllBytes());
				} catch ($Throwable& t$) {
					if (is != nullptr) {
						try {
							is->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$2) {
				$assign(var$1, var$2);
			} /*finally*/ {
				if (is != nullptr) {
					is->close();
				}
			}
			if (var$1 != nullptr) {
				$throw(var$1);
			}
		}
	} catch ($Exception& e) {
		$throwNew($InternalError, $$str({"Can\'t load "_s, path}), e);
	}
	return $of(data);
}

$InputStream* BreakIteratorResourceBundle::getResourceAsStream($String* path) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, pa, nullptr);
	$assign(pa, static_cast<$PrivilegedExceptionAction*>($new(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, this, path)));
	$var($InputStream, is, nullptr);
	try {
		$assign(is, $cast($InputStream, $AccessController::doPrivileged(pa)));
	} catch ($PrivilegedActionException& e) {
		$throw($(e->getException()));
	}
	return is;
}

$Enumeration* BreakIteratorResourceBundle::getKeys() {
	return $Collections::enumeration($(keySet()));
}

$Set* BreakIteratorResourceBundle::handleKeySet() {
	$useLocalCurrentObjectStackCache();
	if (this->keys == nullptr) {
		$var($ResourceBundle, info, getBreakIteratorInfo());
		$var($Set, k, $nc(info)->keySet());
		$nc(k)->removeAll(BreakIteratorResourceBundle::NON_DATA_KEYS);
		$synchronized(this) {
			if (this->keys == nullptr) {
				$set(this, keys, k);
			}
		}
	}
	return this->keys;
}

$InputStream* BreakIteratorResourceBundle::lambda$getResourceAsStream$0($String* path) {
	$beforeCallerSensitive();
	return $nc($($of(this)->getClass()->getModule()))->getResourceAsStream(path);
}

void clinit$BreakIteratorResourceBundle($Class* class$) {
	$assignStatic(BreakIteratorResourceBundle::NON_DATA_KEYS, $Set::of($of("BreakIteratorClasses"_s)));
}

BreakIteratorResourceBundle::BreakIteratorResourceBundle() {
}

$Class* BreakIteratorResourceBundle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::classInfo$.name)) {
			return BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::load$(name, initialize);
		}
	}
	$loadClass(BreakIteratorResourceBundle, name, initialize, &_BreakIteratorResourceBundle_ClassInfo_, clinit$BreakIteratorResourceBundle, allocate$BreakIteratorResourceBundle);
	return class$;
}

$Class* BreakIteratorResourceBundle::class$ = nullptr;

		} // resources
	} // util
} // sun