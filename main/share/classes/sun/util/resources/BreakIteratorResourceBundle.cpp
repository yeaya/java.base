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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
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
		 return $nc(inst$)->lambda$getResourceAsStream$0(path);
	}
	BreakIteratorResourceBundle* inst$ = nullptr;
	$String* path = nullptr;
};
$Class* BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, inst$)},
		{"path", "Ljava/lang/String;", nullptr, $PUBLIC, $field(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, path)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/util/resources/BreakIteratorResourceBundle;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, init$, void, BreakIteratorResourceBundle*, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.util.resources.BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0);
	});
	return class$;
}
$Class* BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::class$ = nullptr;

$Set* BreakIteratorResourceBundle::NON_DATA_KEYS = nullptr;

void BreakIteratorResourceBundle::init$() {
	$ResourceBundle::init$();
}

$Object* BreakIteratorResourceBundle::handleGetObject($String* key) {
	$useLocalObjectStack();
	if ($nc(BreakIteratorResourceBundle::NON_DATA_KEYS)->contains(key)) {
		return nullptr;
	}
	$var($ResourceBundle, info, getBreakIteratorInfo());
	if (!$nc(info)->containsKey(key)) {
		return nullptr;
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($$nc($of(this)->getClass()->getPackageName())->replace(u'.', u'/')));
	var$0->append(u'/');
	var$0->append($(info->getString(key)));
	$var($String, path, $str(var$0));
	$var($bytes, data, nullptr);
	try {
		$var($InputStream, is, getResourceAsStream(path));
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
	} catch ($Exception& e) {
		$throwNew($InternalError, $$str({"Can\'t load "_s, path}), e);
	}
	return data;
}

$InputStream* BreakIteratorResourceBundle::getResourceAsStream($String* path) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($PrivilegedExceptionAction, pa, nullptr);
	$assign(pa, $new(BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0, this, path));
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
	$useLocalObjectStack();
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
	return $$nc($of(this)->getClass()->getModule())->getResourceAsStream(path);
}

void BreakIteratorResourceBundle::clinit$($Class* clazz) {
	$assignStatic(BreakIteratorResourceBundle::NON_DATA_KEYS, $Set::of("BreakIteratorClasses"_s));
}

BreakIteratorResourceBundle::BreakIteratorResourceBundle() {
}

$Class* BreakIteratorResourceBundle::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.util.resources.BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0")) {
			return BreakIteratorResourceBundle$$Lambda$lambda$getResourceAsStream$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"NON_DATA_KEYS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(BreakIteratorResourceBundle, NON_DATA_KEYS)},
		{"keys", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $VOLATILE, $field(BreakIteratorResourceBundle, keys)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorResourceBundle, init$, void)},
		{"getBreakIteratorInfo", "()Ljava/util/ResourceBundle;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(BreakIteratorResourceBundle, getBreakIteratorInfo, $ResourceBundle*)},
		{"getKeys", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(BreakIteratorResourceBundle, getKeys, $Enumeration*)},
		{"getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(BreakIteratorResourceBundle, getResourceAsStream, $InputStream*, $String*), "java.lang.Exception"},
		{"handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(BreakIteratorResourceBundle, handleGetObject, $Object*, $String*)},
		{"handleKeySet", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PROTECTED, $virtualMethod(BreakIteratorResourceBundle, handleKeySet, $Set*)},
		{"lambda$getResourceAsStream$0", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE | $SYNTHETIC, $method(BreakIteratorResourceBundle, lambda$getResourceAsStream$0, $InputStream*, $String*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.resources.BreakIteratorResourceBundle",
		"java.util.ResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BreakIteratorResourceBundle, name, initialize, &classInfo$$, BreakIteratorResourceBundle::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BreakIteratorResourceBundle);
	});
	return class$;
}

$Class* BreakIteratorResourceBundle::class$ = nullptr;

		} // resources
	} // util
} // sun