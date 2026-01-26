#include <N1$Inner2.h>

#include <N1.h>
#include <jcpp.h>

using $N1 = ::N1;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _N1$Inner2_FieldInfo_[] = {
	{"this$0", "LN1;", nullptr, $FINAL | $SYNTHETIC, $field(N1$Inner2, this$0)},
	{"x", "Z", nullptr, $PUBLIC, $field(N1$Inner2, x)},
	{"b", "B", nullptr, $PUBLIC, $field(N1$Inner2, b)},
	{"s", "S", nullptr, $PUBLIC, $field(N1$Inner2, s)},
	{"c", "C", nullptr, $PUBLIC, $field(N1$Inner2, c)},
	{"i", "I", nullptr, $PUBLIC, $field(N1$Inner2, i)},
	{"l", "J", nullptr, $PUBLIC, $field(N1$Inner2, l)},
	{"f", "F", nullptr, $PUBLIC, $field(N1$Inner2, f)},
	{"d", "D", nullptr, $PUBLIC, $field(N1$Inner2, d)},
	{"xa", "[Z", nullptr, $PUBLIC, $field(N1$Inner2, xa)},
	{"ba", "[B", nullptr, $PUBLIC, $field(N1$Inner2, ba)},
	{"sa", "[S", nullptr, $PUBLIC, $field(N1$Inner2, sa)},
	{"ca", "[C", nullptr, $PUBLIC, $field(N1$Inner2, ca)},
	{"ia", "[I", nullptr, $PUBLIC, $field(N1$Inner2, ia)},
	{"la", "[J", nullptr, $PUBLIC, $field(N1$Inner2, la)},
	{"fa", "[F", nullptr, $PUBLIC, $field(N1$Inner2, fa)},
	{"da", "[D", nullptr, $PUBLIC, $field(N1$Inner2, da)},
	{}
};

$MethodInfo _N1$Inner2_MethodInfo_[] = {
	{"<init>", "(LN1;)V", nullptr, $PUBLIC, $method(N1$Inner2, init$, void, $N1*)},
	{}
};

$InnerClassInfo _N1$Inner2_InnerClassesInfo_[] = {
	{"N1$Inner2", "N1", "Inner2", $PUBLIC},
	{}
};

$ClassInfo _N1$Inner2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"N1$Inner2",
	"java.lang.Object",
	nullptr,
	_N1$Inner2_FieldInfo_,
	_N1$Inner2_MethodInfo_,
	"<T1:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_N1$Inner2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"N1"
};

$Object* allocate$N1$Inner2($Class* clazz) {
	return $of($alloc(N1$Inner2));
}

void N1$Inner2::init$($N1* this$0) {
	$set(this, this$0, this$0);
}

N1$Inner2::N1$Inner2() {
}

$Class* N1$Inner2::load$($String* name, bool initialize) {
	$loadClass(N1$Inner2, name, initialize, &_N1$Inner2_ClassInfo_, allocate$N1$Inner2);
	return class$;
}

$Class* N1$Inner2::class$ = nullptr;