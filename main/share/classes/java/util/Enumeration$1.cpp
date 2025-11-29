#include <java/util/Enumeration$1.h>

#include <java/util/Enumeration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace java {
	namespace util {

$FieldInfo _Enumeration$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/Enumeration;", nullptr, $FINAL | $SYNTHETIC, $field(Enumeration$1, this$0)},
	{}
};

$MethodInfo _Enumeration$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Enumeration;)V", nullptr, 0, $method(static_cast<void(Enumeration$1::*)($Enumeration*)>(&Enumeration$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/lang/Object;", "()TE;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Enumeration$1_EnclosingMethodInfo_ = {
	"java.util.Enumeration",
	"asIterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Enumeration$1_InnerClassesInfo_[] = {
	{"java.util.Enumeration$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Enumeration$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.Enumeration$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Enumeration$1_FieldInfo_,
	_Enumeration$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<TE;>;",
	&_Enumeration$1_EnclosingMethodInfo_,
	_Enumeration$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Enumeration"
};

$Object* allocate$Enumeration$1($Class* clazz) {
	return $of($alloc(Enumeration$1));
}

void Enumeration$1::init$($Enumeration* this$0) {
	$set(this, this$0, this$0);
}

bool Enumeration$1::hasNext() {
	return this->this$0->hasMoreElements();
}

$Object* Enumeration$1::next() {
	return $of(this->this$0->nextElement());
}

Enumeration$1::Enumeration$1() {
}

$Class* Enumeration$1::load$($String* name, bool initialize) {
	$loadClass(Enumeration$1, name, initialize, &_Enumeration$1_ClassInfo_, allocate$Enumeration$1);
	return class$;
}

$Class* Enumeration$1::class$ = nullptr;

	} // util
} // java