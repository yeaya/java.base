#include <java/lang/invoke/LambdaFormEditor$1.h>

#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaFormEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaFormEditor = ::java::lang::invoke::LambdaFormEditor;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaFormEditor$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/invoke/LambdaFormEditor;", nullptr, $FINAL | $SYNTHETIC, $field(LambdaFormEditor$1, this$0)},
	{}
};

$MethodInfo _LambdaFormEditor$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/LambdaFormEditor;)V", nullptr, 0, $method(LambdaFormEditor$1, init$, void, $LambdaFormEditor*)},
	{"compare", "(Ljava/lang/invoke/LambdaForm$Name;Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, $PUBLIC, $virtualMethod(LambdaFormEditor$1, compare, int32_t, $LambdaForm$Name*, $LambdaForm$Name*)},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LambdaFormEditor$1, compare, int32_t, Object$*, Object$*)},
	{}
};

$EnclosingMethodInfo _LambdaFormEditor$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.LambdaFormEditor",
	"makeRepeatedFilterForm",
	"(Ljava/lang/invoke/MethodType;[I)Ljava/lang/invoke/LambdaForm;"
};

$InnerClassInfo _LambdaFormEditor$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.LambdaFormEditor$1", nullptr, nullptr, 0},
	{"java.lang.invoke.LambdaForm$Name", "java.lang.invoke.LambdaForm", "Name", $STATIC | $FINAL},
	{}
};

$ClassInfo _LambdaFormEditor$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.LambdaFormEditor$1",
	"java.lang.Object",
	"java.util.Comparator",
	_LambdaFormEditor$1_FieldInfo_,
	_LambdaFormEditor$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/invoke/LambdaForm$Name;>;",
	&_LambdaFormEditor$1_EnclosingMethodInfo_,
	_LambdaFormEditor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.LambdaFormEditor"
};

$Object* allocate$LambdaFormEditor$1($Class* clazz) {
	return $of($alloc(LambdaFormEditor$1));
}

void LambdaFormEditor$1::init$($LambdaFormEditor* this$0) {
	$set(this, this$0, this$0);
}

int32_t LambdaFormEditor$1::compare($LambdaForm$Name* n1, $LambdaForm$Name* n2) {
	return $nc(n1)->index$ - $nc(n2)->index$;
}

int32_t LambdaFormEditor$1::compare(Object$* n1, Object$* n2) {
	return this->compare($cast($LambdaForm$Name, n1), $cast($LambdaForm$Name, n2));
}

LambdaFormEditor$1::LambdaFormEditor$1() {
}

$Class* LambdaFormEditor$1::load$($String* name, bool initialize) {
	$loadClass(LambdaFormEditor$1, name, initialize, &_LambdaFormEditor$1_ClassInfo_, allocate$LambdaFormEditor$1);
	return class$;
}

$Class* LambdaFormEditor$1::class$ = nullptr;

		} // invoke
	} // lang
} // java