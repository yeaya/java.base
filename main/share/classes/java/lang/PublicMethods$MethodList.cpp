#include <java/lang/PublicMethods$MethodList.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/PublicMethods$Key.h>
#include <java/lang/PublicMethods.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicMethods = ::java::lang::PublicMethods;
using $PublicMethods$Key = ::java::lang::PublicMethods$Key;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;

namespace java {
	namespace lang {

$FieldInfo _PublicMethods$MethodList_FieldInfo_[] = {
	{"method", "Ljava/lang/reflect/Method;", nullptr, 0, $field(PublicMethods$MethodList, method)},
	{"next", "Ljava/lang/PublicMethods$MethodList;", nullptr, 0, $field(PublicMethods$MethodList, next)},
	{}
};

$MethodInfo _PublicMethods$MethodList_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;)V", nullptr, $PRIVATE, $method(static_cast<void(PublicMethods$MethodList::*)($Method*)>(&PublicMethods$MethodList::init$))},
	{"filter", "([Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class;Z)Ljava/lang/PublicMethods$MethodList;", "([Ljava/lang/reflect/Method;Ljava/lang/String;[Ljava/lang/Class<*>;Z)Ljava/lang/PublicMethods$MethodList;", $STATIC, $method(static_cast<PublicMethods$MethodList*(*)($MethodArray*,$String*,$ClassArray*,bool)>(&PublicMethods$MethodList::filter))},
	{"getMostSpecific", "()Ljava/lang/reflect/Method;", nullptr, 0, $method(static_cast<$Method*(PublicMethods$MethodList::*)()>(&PublicMethods$MethodList::getMostSpecific))},
	{"length", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(PublicMethods$MethodList::*)()>(&PublicMethods$MethodList::length))},
	{"merge", "(Ljava/lang/PublicMethods$MethodList;Ljava/lang/PublicMethods$MethodList;)Ljava/lang/PublicMethods$MethodList;", nullptr, $STATIC, $method(static_cast<PublicMethods$MethodList*(*)(PublicMethods$MethodList*,PublicMethods$MethodList*)>(&PublicMethods$MethodList::merge))},
	{"merge", "(Ljava/lang/PublicMethods$MethodList;Ljava/lang/reflect/Method;)Ljava/lang/PublicMethods$MethodList;", nullptr, $PRIVATE | $STATIC, $method(static_cast<PublicMethods$MethodList*(*)(PublicMethods$MethodList*,$Method*)>(&PublicMethods$MethodList::merge))},
	{}
};

$InnerClassInfo _PublicMethods$MethodList_InnerClassesInfo_[] = {
	{"java.lang.PublicMethods$MethodList", "java.lang.PublicMethods", "MethodList", $STATIC | $FINAL},
	{}
};

$ClassInfo _PublicMethods$MethodList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.PublicMethods$MethodList",
	"java.lang.Object",
	nullptr,
	_PublicMethods$MethodList_FieldInfo_,
	_PublicMethods$MethodList_MethodInfo_,
	nullptr,
	nullptr,
	_PublicMethods$MethodList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.PublicMethods"
};

$Object* allocate$PublicMethods$MethodList($Class* clazz) {
	return $of($alloc(PublicMethods$MethodList));
}

void PublicMethods$MethodList::init$($Method* method) {
	$set(this, method, method);
}

PublicMethods$MethodList* PublicMethods$MethodList::filter($MethodArray* methods, $String* name, $ClassArray* ptypes, bool includeStatic) {
	$var(PublicMethods$MethodList, head, nullptr);
	$var(PublicMethods$MethodList, tail, nullptr);
	{
		$var($MethodArray, arr$, methods);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Method, method, arr$->get(i$));
			{
				bool var$0 = (includeStatic || !$Modifier::isStatic($nc(method)->getModifiers()));
				if (var$0 && $PublicMethods$Key::matches(method, name, ptypes)) {
					if (tail == nullptr) {
						$assign(head, ($assign(tail, $new(PublicMethods$MethodList, method))));
					} else {
						$assign(tail, ($assignField($nc(tail), next, $new(PublicMethods$MethodList, method))));
					}
				}
			}
		}
	}
	return head;
}

PublicMethods$MethodList* PublicMethods$MethodList::merge(PublicMethods$MethodList* head$renamed, PublicMethods$MethodList* methodList) {
	$var(PublicMethods$MethodList, head, head$renamed);
	{
		$var(PublicMethods$MethodList, ml, methodList);
		for (; ml != nullptr; $assign(ml, $nc(ml)->next)) {
			$assign(head, merge(head, ml->method));
		}
	}
	return head;
}

PublicMethods$MethodList* PublicMethods$MethodList::merge(PublicMethods$MethodList* head$renamed, $Method* method) {
	$var(PublicMethods$MethodList, head, head$renamed);
	$Class* dclass = $nc(method)->getDeclaringClass();
	$Class* rtype = method->getReturnType();
	$var(PublicMethods$MethodList, prev, nullptr);
	{
		$var(PublicMethods$MethodList, l, head);
		for (; l != nullptr; $assign(l, $nc(l)->next)) {
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
				} else if ($nc(dclass)->isInterface()) {
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
		$set($nc(prev), next, $new(PublicMethods$MethodList, method));
	}
	return head;
}

int32_t PublicMethods$MethodList::length() {
	int32_t len = 1;
	{
		$var(PublicMethods$MethodList, ml, this->next);
		for (; ml != nullptr; $assign(ml, $nc(ml)->next)) {
			++len;
		}
	}
	return len;
}

$Method* PublicMethods$MethodList::getMostSpecific() {
	$var($Method, m, this->method);
	$Class* rt = $nc(m)->getReturnType();
	{
		$var(PublicMethods$MethodList, ml, this->next);
		for (; ml != nullptr; $assign(ml, $nc(ml)->next)) {
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
	$loadClass(PublicMethods$MethodList, name, initialize, &_PublicMethods$MethodList_ClassInfo_, allocate$PublicMethods$MethodList);
	return class$;
}

$Class* PublicMethods$MethodList::class$ = nullptr;

	} // lang
} // java