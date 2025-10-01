#include <java/util/Enumeration.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration$1.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration$1 = ::java::util::Enumeration$1;
using $Iterator = ::java::util::Iterator;

namespace java {
	namespace util {

$MethodInfo _Enumeration_MethodInfo_[] = {
	{"asIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<TE;>;", $PUBLIC},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"nextElement", "()Ljava/lang/Object;", "()TE;", $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _Enumeration_InnerClassesInfo_[] = {
	{"java.util.Enumeration$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Enumeration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Enumeration",
	nullptr,
	nullptr,
	nullptr,
	_Enumeration_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Enumeration_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Enumeration$1"
};

$Object* allocate$Enumeration($Class* clazz) {
	return $of($alloc(Enumeration));
}

$Iterator* Enumeration::asIterator() {
	return $new($Enumeration$1, this);
}

$Class* Enumeration::load$($String* name, bool initialize) {
	$loadClass(Enumeration, name, initialize, &_Enumeration_ClassInfo_, allocate$Enumeration);
	return class$;
}

$Class* Enumeration::class$ = nullptr;

	} // util
} // java