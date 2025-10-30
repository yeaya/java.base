#include <TypeTag.h>

#include <jcpp.h>

#undef TYPE

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _TypeTag_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TypeTag::*)()>(&TypeTag::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TypeTag::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _TypeTag_InnerClassesInfo_[] = {
	{"TypeTag$Inner", "TypeTag", "Inner", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TypeTag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"TypeTag",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TypeTag_MethodInfo_,
	nullptr,
	nullptr,
	_TypeTag_InnerClassesInfo_,
	nullptr,
	nullptr,
	"TypeTag$Inner"
};

$Object* allocate$TypeTag($Class* clazz) {
	return $of($alloc(TypeTag));
}

void TypeTag::init$() {
}

void TypeTag::main($StringArray* args) {
	$load(TypeTag);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassArray, v, nullptr);
	$init($Integer);
	$assign(v, $nc($Integer::TYPE)->getDeclaredClasses());
	if (v == nullptr || v->length != 0) {
		$throwNew($Exception, "Integer.TYPE.getDeclaredClasses is not working"_s);
	}
	$nc($System::out)->println($$str({"Integer.TYPE: "_s, $($of(v)->toString())}));
	$assign(v, TypeTag::class$->getDeclaredClasses());
	if (v == nullptr) {
		$throwNew($Exception, "TypeTag.class.getDeclaredClasses returned null"_s);
	}
	$nc($System::out)->println($$str({"TypeTag.class: "_s, $($of(v)->toString())}));
	int32_t n = 0;
	for (int32_t i = 0; i < v->length; ++i) {
		$var($String, name, $nc(v->get(i))->getName());
		$nc($System::out)->print(name);
		if (!$nc(name)->matches("\\D\\w*\\$\\d*"_s)) {
			++n;
			$nc($System::out)->println(" -- user class"_s);
		} else {
			$nc($System::out)->println();
		}
	}
	if (n != 1) {
		$throwNew($Exception, "TypeTag.class.getDeclaredClasses found too many classes"_s);
	}
}

TypeTag::TypeTag() {
}

$Class* TypeTag::load$($String* name, bool initialize) {
	$loadClass(TypeTag, name, initialize, &_TypeTag_ClassInfo_, allocate$TypeTag);
	return class$;
}

$Class* TypeTag::class$ = nullptr;