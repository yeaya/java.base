#include <Probe.h>
#include <Classes.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Classes = ::Classes;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $FieldArray = $Array<::java::lang::reflect::Field>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Field = ::java::lang::reflect::Field;
using $Method = ::java::lang::reflect::Method;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

void Probe::init$() {
}

void Probe::main($StringArray* args) {
	$useLocalObjectStack();
	$load(Probe);
	$beforeCallerSensitive();
	$load($Classes);
	$var($Classes, classesAnnotation, $cast($Classes, Probe::class$->getAnnotation($Classes::class$)));
	$var($List, names, $new($ArrayList, $($Arrays::asList($($nc(classesAnnotation)->value())))));
	int32_t errs = 0;
	{
		$var($Iterator, i$, names->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				$nc($System::out)->println($$str({"\nCLASS "_s, name}));
				$Class* c = $Class::forName(name, false, nullptr);
				errs += probe(c);
				$System::out->println(errs == 0 ? "  ok"_s : $$str({"  ERRORS:"_s, $$str(errs)}));
			}
		}
	}
	if (errs > 0) {
		$throwNew($RuntimeException, "Errors during probing."_s);
	}
}

int32_t Probe::probe($Class* c) {
	$useLocalObjectStack();
	$load(Probe);
	$beforeCallerSensitive();
	int32_t errs = 0;
	try {
		$nc(c)->getTypeParameters();
		c->getGenericSuperclass();
		c->getGenericInterfaces();
	} catch ($Throwable& t) {
		++errs;
		$nc($System::err)->println($of(t));
	}
	$var($FieldArray, fields, $nc(c)->getDeclaredFields());
	if (fields != nullptr) {
		$var($FieldArray, arr$, fields);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Field, field, arr$->get(i$));
			try {
				$nc(field)->getGenericType();
			} catch ($Throwable& t) {
				++errs;
				$nc($System::err)->println($$str({"FIELD "_s, field}));
				$System::err->println($of(t));
			}
		}
	}
	$var($MethodArray, methods, c->getDeclaredMethods());
	if (methods != nullptr) {
		$var($MethodArray, arr$, methods);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			try {
				$nc(method)->getTypeParameters();
				method->getGenericReturnType();
				method->getGenericParameterTypes();
				method->getGenericExceptionTypes();
			} catch ($Throwable& t) {
				++errs;
				$nc($System::err)->println($$str({"METHOD "_s, method}));
				$System::err->println($of(t));
			}
		}
	}
	$var($ConstructorArray, ctors, c->getDeclaredConstructors());
	if (ctors != nullptr) {
		$var($ConstructorArray, arr$, ctors);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($Constructor, ctor, arr$->get(i$));
			try {
				$nc(ctor)->getTypeParameters();
				ctor->getGenericParameterTypes();
				ctor->getGenericExceptionTypes();
			} catch ($Throwable& t) {
				++errs;
				$nc($System::err)->println($$str({"CONSTRUCTOR "_s, ctor}));
				$System::err->println($of(t));
			}
		}
	}
	return errs;
}

Probe::Probe() {
}

$Class* Probe::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Probe, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(Probe, main, void, $StringArray*), "java.lang.Throwable"},
		{"probe", "(Ljava/lang/Class;)I", nullptr, $STATIC, $staticMethod(Probe, probe, int32_t, $Class*)},
		{}
	};
	$Attribute $attribute[] = {
		{'s', "java.util.concurrent.FutureTask"},
		{'s', "java.util.concurrent.ConcurrentHashMap$EntryIterator"},
		{'s', "java.util.concurrent.ConcurrentHashMap$KeyIterator"},
		{'s', "java.util.concurrent.ConcurrentHashMap$ValueIterator"},
		{'s', "java.util.AbstractList$ListItr"},
		{'s', "java.util.EnumMap$EntryIterator"},
		{'s', "java.util.EnumMap$KeyIterator"},
		{'s', "java.util.EnumMap$ValueIterator"},
		{'s', "java.util.IdentityHashMap$EntryIterator"},
		{'s', "java.util.IdentityHashMap$KeyIterator"},
		{'s', "java.util.IdentityHashMap$ValueIterator"},
		{'s', "java.util.WeakHashMap$EntryIterator"},
		{'s', "java.util.WeakHashMap$KeyIterator"},
		{'s', "java.util.WeakHashMap$ValueIterator"},
		{'s', "java.util.HashMap$EntryIterator"},
		{'s', "java.util.HashMap$KeyIterator"},
		{'s', "java.util.HashMap$ValueIterator"},
		{'s', "java.util.LinkedHashMap$LinkedEntryIterator"},
		{'s', "java.util.LinkedHashMap$LinkedKeyIterator"},
		{'s', "java.util.LinkedHashMap$LinkedValueIterator"},
		{'-'}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"LClasses;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Probe",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(Probe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Probe);
	});
	return class$;
}

$Class* Probe::class$ = nullptr;