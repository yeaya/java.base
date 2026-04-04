#include <com/sun/crypto/provider/JceKeyStore$DeserializationChecker.h>
#include <com/sun/crypto/provider/JceKeyStore.h>
#include <com/sun/crypto/provider/SealedObjectForKeyProtector.h>
#include <java/io/ObjectInputFilter$Config.h>
#include <java/io/ObjectInputFilter$FilterInfo.h>
#include <java/io/ObjectInputFilter$Status.h>
#include <java/io/ObjectInputFilter.h>
#include <javax/crypto/SealedObject.h>
#include <jcpp.h>

#undef REJECTED
#undef UNDECIDED

using $SealedObjectForKeyProtector = ::com::sun::crypto::provider::SealedObjectForKeyProtector;
using $ObjectInputFilter = ::java::io::ObjectInputFilter;
using $ObjectInputFilter$Config = ::java::io::ObjectInputFilter$Config;
using $ObjectInputFilter$FilterInfo = ::java::io::ObjectInputFilter$FilterInfo;
using $ObjectInputFilter$Status = ::java::io::ObjectInputFilter$Status;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SealedObject = ::javax::crypto::SealedObject;

namespace com {
	namespace sun {
		namespace crypto {
			namespace provider {

void JceKeyStore$DeserializationChecker::init$(int32_t fullLength) {
	this->fullLength = fullLength;
}

$ObjectInputFilter$Status* JceKeyStore$DeserializationChecker::checkInput($ObjectInputFilter$FilterInfo* info) {
	if ($nc(info)->arrayLength() > this->fullLength) {
		$init($ObjectInputFilter$Status);
		return $ObjectInputFilter$Status::REJECTED;
	}
	$Class* clazz = info->serialClass();
	switch ((int32_t)info->depth()) {
	case 1:
		$load($SealedObjectForKeyProtector);
		if (clazz != $SealedObjectForKeyProtector::class$) {
			$init($ObjectInputFilter$Status);
			return $ObjectInputFilter$Status::REJECTED;
		}
		break;
	case 2:
		$load($SealedObject);
		if (clazz != nullptr && clazz != $SealedObject::class$ && clazz != $getClass($bytes)) {
			$init($ObjectInputFilter$Status);
			return $ObjectInputFilter$Status::REJECTED;
		}
		break;
	default:
		if (clazz != nullptr && clazz != $Object::class$) {
			$init($ObjectInputFilter$Status);
			return $ObjectInputFilter$Status::REJECTED;
		}
		break;
	}
	$var($ObjectInputFilter, defaultFilter, $ObjectInputFilter$Config::getSerialFilter());
	if (defaultFilter != nullptr) {
		return defaultFilter->checkInput(info);
	}
	$init($ObjectInputFilter$Status);
	return $ObjectInputFilter$Status::UNDECIDED;
}

JceKeyStore$DeserializationChecker::JceKeyStore$DeserializationChecker() {
}

$Class* JceKeyStore$DeserializationChecker::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fullLength", "I", nullptr, $PRIVATE | $FINAL, $field(JceKeyStore$DeserializationChecker, fullLength)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(JceKeyStore$DeserializationChecker, init$, void, int32_t)},
		{"checkInput", "(Ljava/io/ObjectInputFilter$FilterInfo;)Ljava/io/ObjectInputFilter$Status;", nullptr, $PUBLIC, $virtualMethod(JceKeyStore$DeserializationChecker, checkInput, $ObjectInputFilter$Status*, $ObjectInputFilter$FilterInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.crypto.provider.JceKeyStore$DeserializationChecker", "com.sun.crypto.provider.JceKeyStore", "DeserializationChecker", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.crypto.provider.JceKeyStore$DeserializationChecker",
		"java.lang.Object",
		"java.io.ObjectInputFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.crypto.provider.JceKeyStore"
	};
	$loadClass(JceKeyStore$DeserializationChecker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JceKeyStore$DeserializationChecker);
	});
	return class$;
}

$Class* JceKeyStore$DeserializationChecker::class$ = nullptr;

			} // provider
		} // crypto
	} // sun
} // com