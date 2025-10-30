#include <Params.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

$NamedAttribute Params_Attribute_var$0[] = {
	{"value", 's', "1"},
	{}
};

$NamedAttribute Params_Attribute_var$1[] = {
	{"value", 's', "3a"},
	{}
};

$NamedAttribute Params_Attribute_var$2[] = {
	{"value", 's', "3b"},
	{}
};

$TypeAnnotation _Params_MethodTypeAnnotations_mixed1[] = {
	{"LTypeAnno;", Params_Attribute_var$0, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{"LTypeAnno;", Params_Attribute_var$1, "METHOD_FORMAL_PARAMETER, param_index = 2"},
	{"LTypeAnno2;", Params_Attribute_var$2, "METHOD_FORMAL_PARAMETER, param_index = 2"},
	{}
};

$NamedAttribute Params_Attribute_var$3[] = {
	{"value", 's', "1"},
	{}
};

$NamedAttribute Params_Attribute_var$4[] = {
	{"value", 's', "2"},
	{}
};

$NamedAttribute Params_Attribute_var$5[] = {
	{"value", 's', "3a"},
	{}
};

$NamedAttribute Params_Attribute_var$6[] = {
	{"value", 's', "3b"},
	{}
};

$TypeAnnotation _Params_MethodTypeAnnotations_onlyAnnotated3[] = {
	{"LTypeAnno;", Params_Attribute_var$3, "METHOD_FORMAL_PARAMETER, param_index = 0"},
	{"LTypeAnno;", Params_Attribute_var$4, "METHOD_FORMAL_PARAMETER, param_index = 1"},
	{"LTypeAnno;", Params_Attribute_var$5, "METHOD_FORMAL_PARAMETER, param_index = 2"},
	{"LTypeAnno2;", Params_Attribute_var$6, "METHOD_FORMAL_PARAMETER, param_index = 2"},
	{}
};

$MethodInfo _Params_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Params::*)()>(&Params::init$))},
	{"mixed", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, nullptr, _Params_MethodTypeAnnotations_mixed1},
	{"noParams", "()V", nullptr, $PUBLIC},
	{"onlyAnnotated", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, nullptr, nullptr, nullptr, _Params_MethodTypeAnnotations_onlyAnnotated3},
	{"unAnnotated", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Params_ClassInfo_ = {
	$ACC_SUPER,
	"Params",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Params_MethodInfo_
};

$Object* allocate$Params($Class* clazz) {
	return $of($alloc(Params));
}

void Params::init$() {
}

void Params::noParams() {
}

void Params::onlyAnnotated($String* s1, $String* s2, $String* s3) {
}

void Params::mixed($String* s1, $String* s2, $String* s3) {
}

void Params::unAnnotated($String* s1, $String* s2, $String* s3) {
}

Params::Params() {
}

$Class* Params::load$($String* name, bool initialize) {
	$loadClass(Params, name, initialize, &_Params_ClassInfo_, allocate$Params);
	return class$;
}

$Class* Params::class$ = nullptr;