#include <java/util/jar/JarVerifier$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/jar/JarVerifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $JarVerifier = ::java::util::jar::JarVerifier;

namespace java {
	namespace util {
		namespace jar {

$FieldInfo _JarVerifier$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/jar/JarVerifier;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, this$0)},
	{"val$enum2", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, val$enum2)},
	{"val$signersReq", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, val$signersReq)},
	{"val$itor", "Ljava/util/Iterator;", nullptr, $FINAL | $SYNTHETIC, $field(JarVerifier$1, val$itor)},
	{"name", "Ljava/lang/String;", nullptr, 0, $field(JarVerifier$1, name)},
	{}
};

$MethodInfo _JarVerifier$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/jar/JarVerifier;Ljava/util/Iterator;Ljava/util/List;Ljava/util/Enumeration;)V", nullptr, 0, $method(static_cast<void(JarVerifier$1::*)($JarVerifier*,$Iterator*,$List*,$Enumeration*)>(&JarVerifier$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JarVerifier$1_EnclosingMethodInfo_ = {
	"java.util.jar.JarVerifier",
	"entryNames",
	"(Ljava/util/jar/JarFile;[Ljava/security/CodeSource;)Ljava/util/Enumeration;"
};

$InnerClassInfo _JarVerifier$1_InnerClassesInfo_[] = {
	{"java.util.jar.JarVerifier$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JarVerifier$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.jar.JarVerifier$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_JarVerifier$1_FieldInfo_,
	_JarVerifier$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/lang/String;>;",
	&_JarVerifier$1_EnclosingMethodInfo_,
	_JarVerifier$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.jar.JarVerifier"
};

$Object* allocate$JarVerifier$1($Class* clazz) {
	return $of($alloc(JarVerifier$1));
}

void JarVerifier$1::init$($JarVerifier* this$0, $Iterator* val$itor, $List* val$signersReq, $Enumeration* val$enum2) {
	$set(this, this$0, this$0);
	$set(this, val$itor, val$itor);
	$set(this, val$signersReq, val$signersReq);
	$set(this, val$enum2, val$enum2);
}

bool JarVerifier$1::hasMoreElements() {
	if (this->name != nullptr) {
		return true;
	}
	while ($nc(this->val$itor)->hasNext()) {
		$var($Map$Entry, e, $cast($Map$Entry, $nc(this->val$itor)->next()));
		if ($nc(this->val$signersReq)->contains($($nc(e)->getValue()))) {
			$set(this, name, $cast($String, $nc(e)->getKey()));
			return true;
		}
	}
	while ($nc(this->val$enum2)->hasMoreElements()) {
		$set(this, name, $cast($String, $nc(this->val$enum2)->nextElement()));
		return true;
	}
	return false;
}

$Object* JarVerifier$1::nextElement() {
	if (hasMoreElements()) {
		$var($String, value, this->name);
		$set(this, name, nullptr);
		return $of(value);
	}
	$throwNew($NoSuchElementException);
}

JarVerifier$1::JarVerifier$1() {
}

$Class* JarVerifier$1::load$($String* name, bool initialize) {
	$loadClass(JarVerifier$1, name, initialize, &_JarVerifier$1_ClassInfo_, allocate$JarVerifier$1);
	return class$;
}

$Class* JarVerifier$1::class$ = nullptr;

		} // jar
	} // util
} // java