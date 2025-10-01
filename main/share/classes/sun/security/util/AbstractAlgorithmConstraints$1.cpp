#include <sun/security/util/AbstractAlgorithmConstraints$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Security.h>
#include <sun/security/util/AbstractAlgorithmConstraints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $AbstractAlgorithmConstraints = ::sun::security::util::AbstractAlgorithmConstraints;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _AbstractAlgorithmConstraints$1_FieldInfo_[] = {
	{"val$propertyName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractAlgorithmConstraints$1, val$propertyName)},
	{}
};

$MethodInfo _AbstractAlgorithmConstraints$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(AbstractAlgorithmConstraints$1::*)($String*)>(&AbstractAlgorithmConstraints$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AbstractAlgorithmConstraints$1_EnclosingMethodInfo_ = {
	"sun.security.util.AbstractAlgorithmConstraints",
	"getAlgorithms",
	"(Ljava/lang/String;)Ljava/util/List;"
};

$InnerClassInfo _AbstractAlgorithmConstraints$1_InnerClassesInfo_[] = {
	{"sun.security.util.AbstractAlgorithmConstraints$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AbstractAlgorithmConstraints$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.util.AbstractAlgorithmConstraints$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AbstractAlgorithmConstraints$1_FieldInfo_,
	_AbstractAlgorithmConstraints$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_AbstractAlgorithmConstraints$1_EnclosingMethodInfo_,
	_AbstractAlgorithmConstraints$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.util.AbstractAlgorithmConstraints"
};

$Object* allocate$AbstractAlgorithmConstraints$1($Class* clazz) {
	return $of($alloc(AbstractAlgorithmConstraints$1));
}

void AbstractAlgorithmConstraints$1::init$($String* val$propertyName) {
	$set(this, val$propertyName, val$propertyName);
}

$Object* AbstractAlgorithmConstraints$1::run() {
	return $of($Security::getProperty(this->val$propertyName));
}

AbstractAlgorithmConstraints$1::AbstractAlgorithmConstraints$1() {
}

$Class* AbstractAlgorithmConstraints$1::load$($String* name, bool initialize) {
	$loadClass(AbstractAlgorithmConstraints$1, name, initialize, &_AbstractAlgorithmConstraints$1_ClassInfo_, allocate$AbstractAlgorithmConstraints$1);
	return class$;
}

$Class* AbstractAlgorithmConstraints$1::class$ = nullptr;

		} // util
	} // security
} // sun