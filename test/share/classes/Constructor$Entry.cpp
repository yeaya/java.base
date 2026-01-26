#include <Constructor$Entry.h>

#include <Constructor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _Constructor$Entry_FieldInfo_[] = {
	{"context", "Ljava/lang/String;", nullptr, $FINAL, $field(Constructor$Entry, context)},
	{"spec", "Ljava/lang/String;", nullptr, $FINAL, $field(Constructor$Entry, spec)},
	{"expected", "Ljava/lang/String;", nullptr, $FINAL, $field(Constructor$Entry, expected)},
	{}
};

$MethodInfo _Constructor$Entry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(Constructor$Entry, init$, void, $String*, $String*, $String*)},
	{}
};

$InnerClassInfo _Constructor$Entry_InnerClassesInfo_[] = {
	{"Constructor$Entry", "Constructor", "Entry", $STATIC},
	{}
};

$ClassInfo _Constructor$Entry_ClassInfo_ = {
	$ACC_SUPER,
	"Constructor$Entry",
	"java.lang.Object",
	nullptr,
	_Constructor$Entry_FieldInfo_,
	_Constructor$Entry_MethodInfo_,
	nullptr,
	nullptr,
	_Constructor$Entry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Constructor"
};

$Object* allocate$Constructor$Entry($Class* clazz) {
	return $of($alloc(Constructor$Entry));
}

void Constructor$Entry::init$($String* context, $String* spec, $String* expected) {
	$set(this, context, context);
	$set(this, spec, spec);
	$set(this, expected, expected);
}

Constructor$Entry::Constructor$Entry() {
}

$Class* Constructor$Entry::load$($String* name, bool initialize) {
	$loadClass(Constructor$Entry, name, initialize, &_Constructor$Entry_ClassInfo_, allocate$Constructor$Entry);
	return class$;
}

$Class* Constructor$Entry::class$ = nullptr;