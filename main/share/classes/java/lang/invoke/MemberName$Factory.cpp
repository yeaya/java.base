#include <java/lang/invoke/MemberName$Factory.h>

#include <java/lang/AssertionError.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/LinkageError.h>
#include <java/lang/Math.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/invoke/MemberName.h>
#include <java/lang/invoke/MethodHandleNatives.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/invoke/util/BytecodeDescriptor.h>
#include <jcpp.h>

#undef ALLOWED_FLAGS
#undef BUF_MAX
#undef INSTANCE

using $MemberNameArray = $Array<::java::lang::invoke::MemberName>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $MemberName = ::java::lang::invoke::MemberName;
using $MethodHandleNatives = ::java::lang::invoke::MethodHandleNatives;
using $MethodType = ::java::lang::invoke::MethodType;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $BytecodeDescriptor = ::sun::invoke::util::BytecodeDescriptor;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _MemberName$Factory_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MemberName$Factory, $assertionsDisabled)},
	{"INSTANCE", "Ljava/lang/invoke/MemberName$Factory;", nullptr, $STATIC, $staticField(MemberName$Factory, INSTANCE)},
	{"ALLOWED_FLAGS", "I", nullptr, $PRIVATE | $STATIC, $staticField(MemberName$Factory, ALLOWED_FLAGS)},
	{}
};

$MethodInfo _MemberName$Factory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MemberName$Factory::*)()>(&MemberName$Factory::init$))},
	{"getConstructors", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $PUBLIC},
	{"getFields", "(Ljava/lang/Class;ZLjava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;ZLjava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $PUBLIC},
	{"getFields", "(Ljava/lang/Class;ZLjava/lang/String;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;ZLjava/lang/String;Ljava/lang/Class<*>;Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $PUBLIC},
	{"getMembers", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Object;ILjava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;Ljava/lang/String;Ljava/lang/Object;ILjava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", 0},
	{"getMethods", "(Ljava/lang/Class;ZLjava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;ZLjava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $PUBLIC},
	{"getMethods", "(Ljava/lang/Class;ZLjava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;ZLjava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $PUBLIC},
	{"getNestedTypes", "(Ljava/lang/Class;ZLjava/lang/Class;)Ljava/util/List;", "(Ljava/lang/Class<*>;ZLjava/lang/Class<*>;)Ljava/util/List<Ljava/lang/invoke/MemberName;>;", $PUBLIC},
	{"newMemberBuffer", "(I)[Ljava/lang/invoke/MemberName;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MemberNameArray*(*)(int32_t)>(&MemberName$Factory::newMemberBuffer))},
	{"resolve", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class;IZ)Ljava/lang/invoke/MemberName;", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class<*>;IZ)Ljava/lang/invoke/MemberName;", $PRIVATE, $method(static_cast<$MemberName*(MemberName$Factory::*)(int8_t,$MemberName*,$Class*,int32_t,bool)>(&MemberName$Factory::resolve))},
	{"resolveOrFail", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class;ILjava/lang/Class;)Ljava/lang/invoke/MemberName;", "<NoSuchMemberException:Ljava/lang/ReflectiveOperationException;>(BLjava/lang/invoke/MemberName;Ljava/lang/Class<*>;ILjava/lang/Class<TNoSuchMemberException;>;)Ljava/lang/invoke/MemberName;^Ljava/lang/IllegalAccessException;^TNoSuchMemberException;", $PUBLIC, nullptr, "java.lang.IllegalAccessException,java.lang.ReflectiveOperationException"},
	{"resolveOrNull", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class;I)Ljava/lang/invoke/MemberName;", "(BLjava/lang/invoke/MemberName;Ljava/lang/Class<*>;I)Ljava/lang/invoke/MemberName;", $PUBLIC},
	{}
};

$InnerClassInfo _MemberName$Factory_InnerClassesInfo_[] = {
	{"java.lang.invoke.MemberName$Factory", "java.lang.invoke.MemberName", "Factory", $STATIC},
	{}
};

$ClassInfo _MemberName$Factory_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.MemberName$Factory",
	"java.lang.Object",
	nullptr,
	_MemberName$Factory_FieldInfo_,
	_MemberName$Factory_MethodInfo_,
	nullptr,
	nullptr,
	_MemberName$Factory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.MemberName"
};

$Object* allocate$MemberName$Factory($Class* clazz) {
	return $of($alloc(MemberName$Factory));
}

bool MemberName$Factory::$assertionsDisabled = false;
MemberName$Factory* MemberName$Factory::INSTANCE = nullptr;
int32_t MemberName$Factory::ALLOWED_FLAGS = 0;

void MemberName$Factory::init$() {
}

$List* MemberName$Factory::getMembers($Class* defc, $String* matchName, Object$* matchType, int32_t matchFlags, $Class* lookupClass) {
	$useLocalCurrentObjectStackCache();
	matchFlags &= (uint32_t)MemberName$Factory::ALLOWED_FLAGS;
	$var($String, matchSig, nullptr);
	if (matchType != nullptr) {
		$assign(matchSig, $BytecodeDescriptor::unparse(matchType));
		if ($nc(matchSig)->startsWith("("_s)) {
			matchFlags &= (uint32_t)~((int32_t)(0x000F0000 & (uint32_t)~0x00030000));
		} else {
			matchFlags &= (uint32_t)~((int32_t)(0x000F0000 & (uint32_t)~0x00040000));
		}
	}
	int32_t BUF_MAX = 8192;
	int32_t len1 = matchName == nullptr ? 10 : matchType == nullptr ? 4 : 1;
	$var($MemberNameArray, buf, newMemberBuffer(len1));
	int32_t totalCount = 0;
	$var($ArrayList, bufs, nullptr);
	int32_t bufCount = 0;
	for (;;) {
		bufCount = $MethodHandleNatives::getMembers(defc, matchName, matchSig, matchFlags, lookupClass, totalCount, buf);
		if (bufCount <= $nc(buf)->length) {
			if (bufCount < 0) {
				bufCount = 0;
			}
			totalCount += bufCount;
			break;
		}
		totalCount += $nc(buf)->length;
		int32_t excess = bufCount - buf->length;
		if (bufs == nullptr) {
			$assign(bufs, $new($ArrayList, 1));
		}
		$nc(bufs)->add(buf);
		int32_t len2 = buf->length;
		len2 = $Math::max(len2, excess);
		len2 = $Math::max(len2, totalCount / 4);
		$assign(buf, newMemberBuffer($Math::min(BUF_MAX, len2)));
	}
	$var($ArrayList, result, $new($ArrayList, totalCount));
	if (bufs != nullptr) {
		{
			$var($Iterator, i$, bufs->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($MemberNameArray, buf0, $cast($MemberNameArray, i$->next()));
				{
					$Collections::addAll(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(result))), buf0);
				}
			}
		}
	}
	for (int32_t i = 0; i < bufCount; ++i) {
		result->add($nc(buf)->get(i));
	}
	if (matchType != nullptr && !$equals(matchType, matchSig)) {
		{
			$var($Iterator, it, result->iterator());
			for (; $nc(it)->hasNext();) {
				$var($MemberName, m, $cast($MemberName, it->next()));
				if (!$of(matchType)->equals($($nc(m)->getType()))) {
					it->remove();
				}
			}
		}
	}
	return result;
}

$MemberName* MemberName$Factory::resolve(int8_t refKind, $MemberName* ref, $Class* lookupClass, int32_t allowedModes, bool speculativeResolve) {
	$var($MemberName, m, $cast($MemberName, $nc(ref)->clone()));
	if (!MemberName$Factory::$assertionsDisabled && !(refKind == $nc(m)->getReferenceKind())) {
		$throwNew($AssertionError);
	}
	try {
		$assign(m, $MethodHandleNatives::resolve(m, lookupClass, allowedModes, speculativeResolve));
		if (m == nullptr && speculativeResolve) {
			return nullptr;
		}
		$nc(m)->checkForTypeAlias(m->getDeclaringClass());
		$set(m, resolution, nullptr);
	} catch ($ClassNotFoundException& ex) {
		if (!MemberName$Factory::$assertionsDisabled && !(!$nc(m)->isResolved())) {
			$throwNew($AssertionError);
		}
		$set($nc(m), resolution, ex);
		return m;
	} catch ($LinkageError& ex) {
		if (!MemberName$Factory::$assertionsDisabled && !(!$nc(m)->isResolved())) {
			$throwNew($AssertionError);
		}
		$set($nc(m), resolution, ex);
		return m;
	}
	if (!MemberName$Factory::$assertionsDisabled && !($nc(m)->referenceKindIsConsistent())) {
		$throwNew($AssertionError);
	}
	$nc(m)->initResolved(true);
	if (!MemberName$Factory::$assertionsDisabled && !(m->vminfoIsConsistent())) {
		$throwNew($AssertionError);
	}
	return m;
}

$MemberName* MemberName$Factory::resolveOrFail(int8_t refKind, $MemberName* m, $Class* lookupClass, int32_t allowedModes, $Class* nsmClass) {
	$useLocalCurrentObjectStackCache();
	if (!MemberName$Factory::$assertionsDisabled && !(lookupClass != nullptr || allowedModes == -1)) {
		$throwNew($AssertionError);
	}
	$var($MemberName, result, resolve(refKind, m, lookupClass, allowedModes, false));
	if ($nc(result)->isResolved()) {
		return result;
	}
	$var($ReflectiveOperationException, ex, $nc(result)->makeAccessException());
	if ($instanceOf($IllegalAccessException, ex)) {
		$throw($cast($IllegalAccessException, ex));
	}
	$throw($cast($ReflectiveOperationException, $($nc(nsmClass)->cast(ex))));
}

$MemberName* MemberName$Factory::resolveOrNull(int8_t refKind, $MemberName* m, $Class* lookupClass, int32_t allowedModes) {
	if (!MemberName$Factory::$assertionsDisabled && !(lookupClass != nullptr || allowedModes == -1)) {
		$throwNew($AssertionError);
	}
	$var($MemberName, result, resolve(refKind, m, lookupClass, allowedModes, true));
	if (result != nullptr && result->isResolved()) {
		return result;
	}
	return nullptr;
}

$List* MemberName$Factory::getMethods($Class* defc, bool searchSupers, $Class* lookupClass) {
	return getMethods(defc, searchSupers, nullptr, nullptr, lookupClass);
}

$List* MemberName$Factory::getMethods($Class* defc, bool searchSupers, $String* name, $MethodType* type, $Class* lookupClass) {
	int32_t matchFlags = 0x00010000 | (searchSupers ? 0x00300000 : 0);
	return getMembers(defc, name, type, matchFlags, lookupClass);
}

$List* MemberName$Factory::getConstructors($Class* defc, $Class* lookupClass) {
	return getMembers(defc, nullptr, nullptr, 0x00020000, lookupClass);
}

$List* MemberName$Factory::getFields($Class* defc, bool searchSupers, $Class* lookupClass) {
	return getFields(defc, searchSupers, nullptr, nullptr, lookupClass);
}

$List* MemberName$Factory::getFields($Class* defc, bool searchSupers, $String* name, $Class* type, $Class* lookupClass) {
	int32_t matchFlags = 0x00040000 | (searchSupers ? 0x00300000 : 0);
	return getMembers(defc, name, type, matchFlags, lookupClass);
}

$List* MemberName$Factory::getNestedTypes($Class* defc, bool searchSupers, $Class* lookupClass) {
	int32_t matchFlags = 0x00080000 | (searchSupers ? 0x00300000 : 0);
	return getMembers(defc, nullptr, nullptr, matchFlags, lookupClass);
}

$MemberNameArray* MemberName$Factory::newMemberBuffer(int32_t length) {
	$init(MemberName$Factory);
	$useLocalCurrentObjectStackCache();
	$var($MemberNameArray, buf, $new($MemberNameArray, length));
	for (int32_t i = 0; i < length; ++i) {
		buf->set(i, $$new($MemberName));
	}
	return buf;
}

void clinit$MemberName$Factory($Class* class$) {
	$load($MemberName);
	MemberName$Factory::$assertionsDisabled = !$MemberName::class$->desiredAssertionStatus();
	$assignStatic(MemberName$Factory::INSTANCE, $new(MemberName$Factory));
	MemberName$Factory::ALLOWED_FLAGS = 0x000F0000;
}

MemberName$Factory::MemberName$Factory() {
}

$Class* MemberName$Factory::load$($String* name, bool initialize) {
	$loadClass(MemberName$Factory, name, initialize, &_MemberName$Factory_ClassInfo_, clinit$MemberName$Factory, allocate$MemberName$Factory);
	return class$;
}

$Class* MemberName$Factory::class$ = nullptr;

		} // invoke
	} // lang
} // java