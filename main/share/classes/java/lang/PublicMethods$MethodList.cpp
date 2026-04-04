#include <java/lang/PublicMethods$MethodList.h>
#include <java/lang/PublicMethods$Key.h>
#include <java/lang/PublicMethods.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicMethods$Key = ::java::lang::PublicMethods$Key;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;

namespace java {
	namespace lang {

void PublicMethods$MethodList::init$($Method* method) {
	$set(this, method, method);
}

PublicMethods$MethodList* PublicMethods$MethodList::filter($MethodArray* methods, $String* name, $ClassArray* ptypes, bool includeStatic) {
	$useLocalObjectStack();
	$var(PublicMethods$MethodList, head, nullptr);
	$var(PublicMethods$MethodList, tail, nullptr);
	{
		$var($MethodArray, arr$, methods);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$0 = includeStatic || !$Modifier::isStatic($nc(method)->getModifiers());
				if (var$0 && $PublicMethods$Key::matches(method, name, ptypes)) {
					if (tail == nullptr) {
						$assign(head, $assign(tail, $new(PublicMethods$MethodList, method)));
					} else {
						$assign(tail, $set(tail, next, $new(PublicMethods$MethodList, method)));
					}
				}
			}
		}
	}
	return head;
}

PublicMethods$MethodList* PublicMethods$MethodList::merge(PublicMethods$MethodList* head$renamed, PublicMethods$MethodList* methodList) {
	$useLocalObjectStack();
	$var(PublicMethods$MethodList, head, head$renamed);
	{
		$var(PublicMethods$MethodList, ml, methodList);
		for (; ml != nullptr; $assign(ml, ml->next)) {
			$assign(head, merge(head, ml->method));
		}
	}
	return head;
}

PublicMethods$MethodList* PublicMethods$MethodList::merge(PublicMethods$MethodList* head$renamed, $Method* method) {
	$useLocalObjectStack();
	$var(PublicMethods$MethodList, head, head$renamed);
	$Class* dclass = $nc(method)->getDeclaringClass();
	$Class* rtype = method->getReturnType();
	$var(PublicMethods$MethodList, prev, nullptr);
	{
		$var(PublicMethods$MethodList, l, head);
		for (; l != nullptr; $assign(l, l->next)) {
			$var($Method, xmethod, l->method);
			if (rtype == $nc(xmethod)->getReturnType()) {
				$Class* xdclass = xmethod->getDeclaringClass();
				bool var$0 = $nc(dclass)->isInterface();
				if (var$0 == $nc(xdclass)->isInterface()) {
					if (dclass->isAssignableFrom(xdclass)) {
						return head;
					}
					if (xdclass->isAssignableFrom(dclass)) {
						if (prev != nullptr) {
							$set(prev, next, l->next);
						} else {
							$assign(head, l->next);
						}
					} else {
						$assign(prev, l);
					}
				} else if (dclass->isInterface()) {
					return head;
				} else if (prev != nullptr) {
					$set(prev, next, l->next);
				} else {
					$assign(head, l->next);
				}
			} else {
				$assign(prev, l);
			}
		}
	}
	if (prev == nullptr) {
		$assign(head, $new(PublicMethods$MethodList, method));
	} else {
		$set(prev, next, $new(PublicMethods$MethodList, method));
	}
	return head;
}

int32_t PublicMethods$MethodList::length() {
	int32_t len = 1;
	{
		$var(PublicMethods$MethodList, ml, this->next);
		for (; ml != nullptr; $assign(ml, ml->next)) {
			++len;
		}
	}
	return len;
}

$Method* PublicMethods$MethodList::getMostSpecific() {
	$useLocalObjectStack();
	$var($Method, m, this->method);
	$Class* rt = $nc(m)->getReturnType();
	{
		$var(PublicMethods$MethodList, ml, this->next);
		for (; ml != nullptr; $assign(ml, ml->next)) {
			$var($Method, m2, ml->method);
			$Class* rt2 = $nc(m2)->getReturnType();
			if (rt2 != rt && $nc(rt)->isAssignableFrom(rt2)) {
				$assign(m, m2);
				rt = rt2;
			}
		}
	}
	return m;
}

PublicMethods$MethodList::PublicMethods$MethodList() {
}

$Class* PublicMethods$MethodList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"method", "Ljava/lang/reflect/Method;", nullptr, 0, $field(PublicMethods$MethodList, method)},
		{"next", "Ljava/lang/PublicMethods$MethodList;", nullptr, 0, $field(PublicMethods$MethodList, next)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(PublicMethods$MethodList, init$, void, $Method*)},
		{"filter", "([Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class;Z)Ljava/lang/PublicMethods$MethodList;", "([Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class<*>;Z)Ljava/lang/PublicMethods$MethodList;", $STATIC, $staticMethod(PublicMethods$MethodList, filter, PublicMethods$MethodList*, $MethodArray*, $String*, $ClassArray*, bool)},
		{"getMostSpecific", "()Ljava/lang/reflect/Method;", nullptr, 0, $method(PublicMethods$MethodList, getMostSpecific, $Method*)},
		{"length", "()I", nullptr, $PRIVATE, $method(PublicMethods$MethodList, length, int32_t)},
		{"merge", "(Ljava/lang/PublicMethods$MethodList;Ljava/lang/PublicMethods$MethodList;)Ljava/lang/PublicMethods$MethodList;", nullptr, $STATIC, $staticMethod(PublicMethods$MethodList, merge, PublicMethods$MethodList*, PublicMethods$MethodList*, PublicMethods$MethodList*)},
		{"merge", "(Ljava/lang/PublicMethods$MethodList;Ljava/lang/reflect/Method;)Ljava/lang/PublicMethods$MethodList;", nullptr, $PRIVATE | $STATIC, $staticMethod(PublicMethods$MethodList, merge, PublicMethods$MethodList*, PublicMethods$MethodList*, $Method*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.PublicMethods$MethodList", "java.lang.PublicMethods", "MethodList", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.lang.PublicMethods$MethodList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.PublicMethods"
	};
	$loadClass(PublicMethods$MethodList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PublicMethods$MethodList);
	});
	return class$;
}

$Class* PublicMethods$MethodList::class$ = nullptr;

	} // lang
} // java