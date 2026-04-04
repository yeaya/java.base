#include <Params.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $TypeAnnotation = ::java::lang::TypeAnnotation;

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
	$NamedAttribute mixedmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "1"},
		{}
	};
	$NamedAttribute mixedmethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "3a"},
		{}
	};
	$NamedAttribute mixedmethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "3b"},
		{}
	};
	$TypeAnnotation mixedmethodTypeAnnotations$$[] = {
		{"LTypeAnno;", mixedmethodTypeAnnotations$$$namedAttribute, "METHOD_FORMAL_PARAMETER, param_index = 0"},
		{"LTypeAnno;", mixedmethodTypeAnnotations$$$namedAttribute$1, "METHOD_FORMAL_PARAMETER, param_index = 2"},
		{"LTypeAnno2;", mixedmethodTypeAnnotations$$$namedAttribute$2, "METHOD_FORMAL_PARAMETER, param_index = 2"},
		{}
	};
	$NamedAttribute onlyAnnotatedmethodTypeAnnotations$$$namedAttribute[] = {
		{"value", 's', "1"},
		{}
	};
	$NamedAttribute onlyAnnotatedmethodTypeAnnotations$$$namedAttribute$1[] = {
		{"value", 's', "2"},
		{}
	};
	$NamedAttribute onlyAnnotatedmethodTypeAnnotations$$$namedAttribute$2[] = {
		{"value", 's', "3a"},
		{}
	};
	$NamedAttribute onlyAnnotatedmethodTypeAnnotations$$$namedAttribute$3[] = {
		{"value", 's', "3b"},
		{}
	};
	$TypeAnnotation onlyAnnotatedmethodTypeAnnotations$$[] = {
		{"LTypeAnno;", onlyAnnotatedmethodTypeAnnotations$$$namedAttribute, "METHOD_FORMAL_PARAMETER, param_index = 0"},
		{"LTypeAnno;", onlyAnnotatedmethodTypeAnnotations$$$namedAttribute$1, "METHOD_FORMAL_PARAMETER, param_index = 1"},
		{"LTypeAnno;", onlyAnnotatedmethodTypeAnnotations$$$namedAttribute$2, "METHOD_FORMAL_PARAMETER, param_index = 2"},
		{"LTypeAnno2;", onlyAnnotatedmethodTypeAnnotations$$$namedAttribute$3, "METHOD_FORMAL_PARAMETER, param_index = 2"},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Params, init$, void)},
		{"mixed", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Params, mixed, void, $String*, $String*, $String*), nullptr, nullptr, nullptr, mixedmethodTypeAnnotations$$},
		{"noParams", "()V", nullptr, $PUBLIC, $virtualMethod(Params, noParams, void)},
		{"onlyAnnotated", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Params, onlyAnnotated, void, $String*, $String*, $String*), nullptr, nullptr, nullptr, onlyAnnotatedmethodTypeAnnotations$$},
		{"unAnnotated", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Params, unAnnotated, void, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Params",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Params, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Params);
	});
	return class$;
}

$Class* Params::class$ = nullptr;