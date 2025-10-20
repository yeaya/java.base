#include <java/lang/invoke/LambdaFormBuffer.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/LambdaForm$BasicType.h>
#include <java/lang/invoke/LambdaForm$Name.h>
#include <java/lang/invoke/LambdaForm$NamedFunction.h>
#include <java/lang/invoke/LambdaForm.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef F_OWNED
#undef F_TRANS
#undef SLOP
#undef V_TYPE

using $LambdaForm$NameArray = $Array<::java::lang::invoke::LambdaForm$Name>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $LambdaForm = ::java::lang::invoke::LambdaForm;
using $LambdaForm$BasicType = ::java::lang::invoke::LambdaForm$BasicType;
using $LambdaForm$Name = ::java::lang::invoke::LambdaForm$Name;
using $LambdaForm$NamedFunction = ::java::lang::invoke::LambdaForm$NamedFunction;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaFormBuffer_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LambdaFormBuffer, $assertionsDisabled)},
	{"arity", "I", nullptr, $PRIVATE, $field(LambdaFormBuffer, arity)},
	{"length", "I", nullptr, $PRIVATE, $field(LambdaFormBuffer, length)},
	{"names", "[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE, $field(LambdaFormBuffer, names)},
	{"originalNames", "[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE, $field(LambdaFormBuffer, originalNames)},
	{"flags", "B", nullptr, $PRIVATE, $field(LambdaFormBuffer, flags)},
	{"firstChange", "I", nullptr, $PRIVATE, $field(LambdaFormBuffer, firstChange)},
	{"resultName", "Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE, $field(LambdaFormBuffer, resultName)},
	{"dups", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/invoke/LambdaForm$Name;>;", $PRIVATE, $field(LambdaFormBuffer, dups)},
	{"F_TRANS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormBuffer, F_TRANS)},
	{"F_OWNED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaFormBuffer, F_OWNED)},
	{}
};

$MethodInfo _LambdaFormBuffer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/invoke/LambdaForm;)V", nullptr, 0, $method(static_cast<void(LambdaFormBuffer::*)($LambdaForm*)>(&LambdaFormBuffer::init$))},
	{"changeName", "(ILjava/lang/invoke/LambdaForm$Name;)V", nullptr, 0, $method(static_cast<void(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*)>(&LambdaFormBuffer::changeName))},
	{"clearDuplicatesAndNulls", "()V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormBuffer::*)()>(&LambdaFormBuffer::clearDuplicatesAndNulls))},
	{"copyNamesInto", "([Ljava/lang/invoke/LambdaForm$Name;)[Ljava/lang/invoke/LambdaForm$Name;", nullptr, $PRIVATE, $method(static_cast<$LambdaForm$NameArray*(LambdaFormBuffer::*)($LambdaForm$NameArray*)>(&LambdaFormBuffer::copyNamesInto))},
	{"endEdit", "()Ljava/lang/invoke/LambdaForm;", nullptr, 0, $method(static_cast<$LambdaForm*(LambdaFormBuffer::*)()>(&LambdaFormBuffer::endEdit))},
	{"growNames", "(II)V", nullptr, 0, $method(static_cast<void(LambdaFormBuffer::*)(int32_t,int32_t)>(&LambdaFormBuffer::growNames))},
	{"inTrans", "()Z", nullptr, 0, $method(static_cast<bool(LambdaFormBuffer::*)()>(&LambdaFormBuffer::inTrans))},
	{"indexOf", "(Ljava/lang/invoke/LambdaForm$NamedFunction;Ljava/util/List;)I", "(Ljava/lang/invoke/LambdaForm$NamedFunction;Ljava/util/List<Ljava/lang/invoke/LambdaForm$NamedFunction;>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($LambdaForm$NamedFunction*,$List*)>(&LambdaFormBuffer::indexOf))},
	{"indexOf", "(Ljava/lang/invoke/LambdaForm$Name;[Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($LambdaForm$Name*,$LambdaForm$NameArray*)>(&LambdaFormBuffer::indexOf))},
	{"insertExpression", "(ILjava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaFormBuffer;", nullptr, 0, $method(static_cast<LambdaFormBuffer*(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*)>(&LambdaFormBuffer::insertExpression))},
	{"insertName", "(ILjava/lang/invoke/LambdaForm$Name;Z)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*,bool)>(&LambdaFormBuffer::insertName))},
	{"insertParameter", "(ILjava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaFormBuffer;", nullptr, 0, $method(static_cast<LambdaFormBuffer*(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*)>(&LambdaFormBuffer::insertParameter))},
	{"lambdaForm", "()Ljava/lang/invoke/LambdaForm;", nullptr, $PRIVATE, $method(static_cast<$LambdaForm*(LambdaFormBuffer::*)()>(&LambdaFormBuffer::lambdaForm))},
	{"lastIndexOf", "(Ljava/lang/invoke/LambdaForm$Name;)I", nullptr, 0, $method(static_cast<int32_t(LambdaFormBuffer::*)($LambdaForm$Name*)>(&LambdaFormBuffer::lastIndexOf))},
	{"name", "(I)Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<$LambdaForm$Name*(LambdaFormBuffer::*)(int32_t)>(&LambdaFormBuffer::name))},
	{"nameArray", "()[Ljava/lang/invoke/LambdaForm$Name;", nullptr, 0, $method(static_cast<$LambdaForm$NameArray*(LambdaFormBuffer::*)()>(&LambdaFormBuffer::nameArray))},
	{"noteDuplicate", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormBuffer::*)(int32_t,int32_t)>(&LambdaFormBuffer::noteDuplicate))},
	{"ownedCount", "()I", nullptr, 0, $method(static_cast<int32_t(LambdaFormBuffer::*)()>(&LambdaFormBuffer::ownedCount))},
	{"renameParameter", "(ILjava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaFormBuffer;", nullptr, 0, $method(static_cast<LambdaFormBuffer*(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*)>(&LambdaFormBuffer::renameParameter))},
	{"replaceFunctions", "(Ljava/util/List;Ljava/util/List;[Ljava/lang/Object;)Ljava/lang/invoke/LambdaFormBuffer;", "(Ljava/util/List<Ljava/lang/invoke/LambdaForm$NamedFunction;>;Ljava/util/List<Ljava/lang/invoke/LambdaForm$NamedFunction;>;[Ljava/lang/Object;)Ljava/lang/invoke/LambdaFormBuffer;", $TRANSIENT, $method(static_cast<LambdaFormBuffer*(LambdaFormBuffer::*)($List*,$List*,$ObjectArray*)>(&LambdaFormBuffer::replaceFunctions))},
	{"replaceName", "(ILjava/lang/invoke/LambdaForm$Name;)V", nullptr, $PRIVATE, $method(static_cast<void(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*)>(&LambdaFormBuffer::replaceName))},
	{"replaceParameterByCopy", "(II)Ljava/lang/invoke/LambdaFormBuffer;", nullptr, 0, $method(static_cast<LambdaFormBuffer*(LambdaFormBuffer::*)(int32_t,int32_t)>(&LambdaFormBuffer::replaceParameterByCopy))},
	{"replaceParameterByNewExpression", "(ILjava/lang/invoke/LambdaForm$Name;)Ljava/lang/invoke/LambdaFormBuffer;", nullptr, 0, $method(static_cast<LambdaFormBuffer*(LambdaFormBuffer::*)(int32_t,$LambdaForm$Name*)>(&LambdaFormBuffer::replaceParameterByNewExpression))},
	{"resultIndex", "()I", nullptr, 0, $method(static_cast<int32_t(LambdaFormBuffer::*)()>(&LambdaFormBuffer::resultIndex))},
	{"setNames", "([Ljava/lang/invoke/LambdaForm$Name;)V", nullptr, 0, $method(static_cast<void(LambdaFormBuffer::*)($LambdaForm$NameArray*)>(&LambdaFormBuffer::setNames))},
	{"setResult", "(Ljava/lang/invoke/LambdaForm$Name;)V", nullptr, 0, $method(static_cast<void(LambdaFormBuffer::*)($LambdaForm$Name*)>(&LambdaFormBuffer::setResult))},
	{"startEdit", "()V", nullptr, 0, $method(static_cast<void(LambdaFormBuffer::*)()>(&LambdaFormBuffer::startEdit))},
	{"verifyArity", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaFormBuffer::*)()>(&LambdaFormBuffer::verifyArity))},
	{"verifyFirstChange", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(LambdaFormBuffer::*)()>(&LambdaFormBuffer::verifyFirstChange))},
	{}
};

$ClassInfo _LambdaFormBuffer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.lang.invoke.LambdaFormBuffer",
	"java.lang.Object",
	nullptr,
	_LambdaFormBuffer_FieldInfo_,
	_LambdaFormBuffer_MethodInfo_
};

$Object* allocate$LambdaFormBuffer($Class* clazz) {
	return $of($alloc(LambdaFormBuffer));
}

bool LambdaFormBuffer::$assertionsDisabled = false;

void LambdaFormBuffer::init$($LambdaForm* lf) {
	this->arity = $nc(lf)->arity$;
	setNames(lf->names);
	int32_t result = lf->result;
	if (result == -2) {
		result = this->length - 1;
	}
	$init($LambdaForm$BasicType);
	if (result >= 0 && $nc($nc(lf->names)->get(result))->type$ != $LambdaForm$BasicType::V_TYPE) {
		$set(this, resultName, $nc(lf->names)->get(result));
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(lf->nameRefsAreLegal())) {
		$throwNew($AssertionError);
	}
}

$LambdaForm* LambdaFormBuffer::lambdaForm() {
	if (!LambdaFormBuffer::$assertionsDisabled && !(!inTrans())) {
		$throwNew($AssertionError);
	}
	int32_t var$0 = this->arity;
	$var($LambdaForm$NameArray, var$1, nameArray());
	return $new($LambdaForm, var$0, var$1, resultIndex());
}

$LambdaForm$Name* LambdaFormBuffer::name(int32_t i) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(i < this->length)) {
		$throwNew($AssertionError);
	}
	return $nc(this->names)->get(i);
}

$LambdaForm$NameArray* LambdaFormBuffer::nameArray() {
	return $fcast($LambdaForm$NameArray, $Arrays::copyOf(this->names, this->length));
}

int32_t LambdaFormBuffer::resultIndex() {
	if (this->resultName == nullptr) {
		return -1;
	}
	int32_t index = indexOf(this->resultName, this->names);
	if (!LambdaFormBuffer::$assertionsDisabled && !(index >= 0)) {
		$throwNew($AssertionError);
	}
	return index;
}

void LambdaFormBuffer::setNames($LambdaForm$NameArray* names2) {
	$set(this, names, ($assignField(this, originalNames, names2)));
	this->length = $nc(names2)->length;
	this->flags = (int8_t)0;
}

bool LambdaFormBuffer::verifyArity() {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < this->arity && i < this->firstChange; ++i) {
		if (!LambdaFormBuffer::$assertionsDisabled && !($nc($nc(this->names)->get(i))->isParam())) {
			$throwNew($AssertionError, $of($$str({"#"_s, $$str(i), "="_s, $nc(this->names)->get(i)})));
		}
	}
	for (int32_t i = this->arity; i < this->length; ++i) {
		if (!LambdaFormBuffer::$assertionsDisabled && !(!$nc($nc(this->names)->get(i))->isParam())) {
			$throwNew($AssertionError, $of($$str({"#"_s, $$str(i), "="_s, $nc(this->names)->get(i)})));
		}
	}
	for (int32_t i = this->length; i < $nc(this->names)->length; ++i) {
		if (!LambdaFormBuffer::$assertionsDisabled && !($nc(this->names)->get(i) == nullptr)) {
			$throwNew($AssertionError, $of($$str({"#"_s, $$str(i), "="_s, $nc(this->names)->get(i)})));
		}
	}
	if (this->resultName != nullptr) {
		int32_t resultIndex = indexOf(this->resultName, this->names);
		if (!LambdaFormBuffer::$assertionsDisabled && !(resultIndex >= 0)) {
			$var($String, var$0, $$str({"not found: "_s, $($nc(this->resultName)->exprString())}));
			$throwNew($AssertionError, $of(($$concat(var$0, $($Arrays::asList(this->names))))));
		}
		if (!LambdaFormBuffer::$assertionsDisabled && !($nc(this->names)->get(resultIndex) == this->resultName)) {
			$throwNew($AssertionError);
		}
	}
	return true;
}

bool LambdaFormBuffer::verifyFirstChange() {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
	for (int32_t i = 0; i < this->length; ++i) {
		if ($nc(this->names)->get(i) != $nc(this->originalNames)->get(i)) {
			if (!LambdaFormBuffer::$assertionsDisabled && !(this->firstChange == i)) {
				$throwNew($AssertionError, $($of($Arrays::asList($$new($ObjectArray, {
					$($of($Integer::valueOf(this->firstChange))),
					$($of($Integer::valueOf(i))),
					$($of($nc($nc(this->originalNames)->get(i))->exprString())),
					$($of($Arrays::asList(this->names)))
				})))));
			}
			return true;
		}
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(this->firstChange == this->length)) {
		$throwNew($AssertionError, $($of($Arrays::asList($$new($ObjectArray, {
			$($of($Integer::valueOf(this->firstChange))),
			$($of($Arrays::asList(this->names)))
		})))));
	}
	return true;
}

int32_t LambdaFormBuffer::indexOf($LambdaForm$NamedFunction* fn, $List* fns) {
	$init(LambdaFormBuffer);
	for (int32_t i = 0; i < $nc(fns)->size(); ++i) {
		if ($equals(fns->get(i), fn)) {
			return i;
		}
	}
	return -1;
}

int32_t LambdaFormBuffer::indexOf($LambdaForm$Name* n, $LambdaForm$NameArray* ns) {
	$init(LambdaFormBuffer);
	for (int32_t i = 0; i < $nc(ns)->length; ++i) {
		if (ns->get(i) == n) {
			return i;
		}
	}
	return -1;
}

bool LambdaFormBuffer::inTrans() {
	return ((int32_t)(this->flags & (uint32_t)LambdaFormBuffer::F_TRANS)) != 0;
}

int32_t LambdaFormBuffer::ownedCount() {
	return (int32_t)(this->flags & (uint32_t)LambdaFormBuffer::F_OWNED);
}

void LambdaFormBuffer::growNames(int32_t insertPos, int32_t growLength) {
	int32_t oldLength = this->length;
	int32_t newLength = oldLength + growLength;
	int32_t oc = ownedCount();
	if (oc == 0 || newLength > $nc(this->names)->length) {
		$set(this, names, $fcast($LambdaForm$NameArray, $Arrays::copyOf(this->names, ($nc(this->names)->length + growLength) * 5 / 4)));
		if (oc == 0) {
			++this->flags;
			++oc;
			if (!LambdaFormBuffer::$assertionsDisabled && !(ownedCount() == oc)) {
				$throwNew($AssertionError);
			}
		}
	}
	if (this->originalNames != nullptr && $nc(this->originalNames)->length < $nc(this->names)->length) {
		$set(this, originalNames, $fcast($LambdaForm$NameArray, $Arrays::copyOf(this->originalNames, $nc(this->names)->length)));
		if (oc == 1) {
			++this->flags;
			++oc;
			if (!LambdaFormBuffer::$assertionsDisabled && !(ownedCount() == oc)) {
				$throwNew($AssertionError);
			}
		}
	}
	if (growLength == 0) {
		return;
	}
	int32_t insertEnd = insertPos + growLength;
	int32_t tailLength = oldLength - insertPos;
	$System::arraycopy(this->names, insertPos, this->names, insertEnd, tailLength);
	$Arrays::fill(this->names, insertPos, insertEnd, ($Object*)nullptr);
	if (this->originalNames != nullptr) {
		$System::arraycopy(this->originalNames, insertPos, this->originalNames, insertEnd, tailLength);
		$Arrays::fill(this->originalNames, insertPos, insertEnd, ($Object*)nullptr);
	}
	this->length = newLength;
	if (this->firstChange >= insertPos) {
		this->firstChange += growLength;
	}
}

int32_t LambdaFormBuffer::lastIndexOf($LambdaForm$Name* n) {
	int32_t result = -1;
	for (int32_t i = 0; i < this->length; ++i) {
		if ($nc(this->names)->get(i) == n) {
			result = i;
		}
	}
	return result;
}

void LambdaFormBuffer::noteDuplicate(int32_t pos1, int32_t pos2) {
	$var($LambdaForm$Name, n, $nc(this->names)->get(pos1));
	if (!LambdaFormBuffer::$assertionsDisabled && !(n == $nc(this->names)->get(pos2))) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !($nc(this->originalNames)->get(pos1) != nullptr)) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !($nc(this->originalNames)->get(pos2) == nullptr || $nc(this->originalNames)->get(pos2) == n)) {
		$throwNew($AssertionError);
	}
	if (this->dups == nullptr) {
		$set(this, dups, $new($ArrayList));
	}
	$nc(this->dups)->add(n);
}

void LambdaFormBuffer::clearDuplicatesAndNulls() {
	$useLocalCurrentObjectStackCache();
	if (this->dups != nullptr) {
		if (!LambdaFormBuffer::$assertionsDisabled && !(ownedCount() >= 1)) {
			$throwNew($AssertionError);
		}
		{
			$var($Iterator, i$, $nc(this->dups)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($LambdaForm$Name, dup, $cast($LambdaForm$Name, i$->next()));
				{
					for (int32_t i = this->firstChange; i < this->length; ++i) {
						if ($nc(this->names)->get(i) == dup && $nc(this->originalNames)->get(i) != dup) {
							$nc(this->names)->set(i, nullptr);
							if (!LambdaFormBuffer::$assertionsDisabled && !($nc($($Arrays::asList(this->names)))->contains(dup))) {
								$throwNew($AssertionError);
							}
							break;
						}
					}
				}
			}
		}
		$nc(this->dups)->clear();
	}
	int32_t oldLength = this->length;
	for (int32_t i = this->firstChange; i < this->length; ++i) {
		if ($nc(this->names)->get(i) == nullptr) {
			$System::arraycopy(this->names, i + 1, this->names, i, (--this->length - i));
			--i;
		}
	}
	if (this->length < oldLength) {
		$Arrays::fill(this->names, this->length, oldLength, ($Object*)nullptr);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(!$nc($($nc($($Arrays::asList(this->names)))->subList(0, this->length)))->contains(nullptr))) {
		$throwNew($AssertionError);
	}
}

void LambdaFormBuffer::startEdit() {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormBuffer::$assertionsDisabled && !(verifyArity())) {
		$throwNew($AssertionError);
	}
	int32_t oc = ownedCount();
	if (!LambdaFormBuffer::$assertionsDisabled && !(!inTrans())) {
		$throwNew($AssertionError);
	}
	this->flags |= LambdaFormBuffer::F_TRANS;
	$var($LambdaForm$NameArray, oldNames, this->names);
	$var($LambdaForm$NameArray, ownBuffer, oc == 2 ? this->originalNames : ($LambdaForm$NameArray*)nullptr);
	if (!LambdaFormBuffer::$assertionsDisabled && !(ownBuffer != oldNames)) {
		$throwNew($AssertionError);
	}
	if (ownBuffer != nullptr && ownBuffer->length >= this->length) {
		$set(this, names, copyNamesInto(ownBuffer));
	} else {
		int32_t SLOP = 2;
		$set(this, names, $fcast($LambdaForm$NameArray, $Arrays::copyOf(oldNames, $Math::max(this->length + SLOP, $nc(oldNames)->length))));
		if (oc < 2) {
			++this->flags;
		}
		if (!LambdaFormBuffer::$assertionsDisabled && !(ownedCount() == oc + 1)) {
			$throwNew($AssertionError);
		}
	}
	$set(this, originalNames, oldNames);
	if (!LambdaFormBuffer::$assertionsDisabled && !(this->originalNames != this->names)) {
		$throwNew($AssertionError);
	}
	this->firstChange = this->length;
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
}

void LambdaFormBuffer::changeName(int32_t i, $LambdaForm$Name* name) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(i < this->length)) {
		$throwNew($AssertionError);
	}
	$var($LambdaForm$Name, oldName, $nc(this->names)->get(i));
	if (!LambdaFormBuffer::$assertionsDisabled && !(oldName == $nc(this->originalNames)->get(i))) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(verifyFirstChange())) {
		$throwNew($AssertionError);
	}
	if (ownedCount() == 0) {
		growNames(0, 0);
	}
	$nc(this->names)->set(i, name);
	if (this->firstChange > i) {
		this->firstChange = i;
	}
	if (this->resultName != nullptr && this->resultName == oldName) {
		$set(this, resultName, name);
	}
}

void LambdaFormBuffer::setResult($LambdaForm$Name* name) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(name == nullptr || lastIndexOf(name) >= 0)) {
		$throwNew($AssertionError);
	}
	$set(this, resultName, name);
}

$LambdaForm* LambdaFormBuffer::endEdit() {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormBuffer::$assertionsDisabled && !(verifyFirstChange())) {
		$throwNew($AssertionError);
	}
	for (int32_t i = $Math::max(this->firstChange, this->arity); i < this->length; ++i) {
		$var($LambdaForm$Name, name, $nc(this->names)->get(i));
		if (name == nullptr) {
			continue;
		}
		$var($LambdaForm$Name, newName, $nc(name)->replaceNames(this->originalNames, this->names, this->firstChange, i));
		if (newName != name) {
			$nc(this->names)->set(i, newName);
			if (this->resultName == name) {
				$set(this, resultName, newName);
			}
		}
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
	this->flags &= (uint8_t)~LambdaFormBuffer::F_TRANS;
	clearDuplicatesAndNulls();
	$set(this, originalNames, nullptr);
	if (this->firstChange < this->arity) {
		$var($LambdaForm$NameArray, exprs, $new($LambdaForm$NameArray, this->arity - this->firstChange));
		int32_t argp = this->firstChange;
		int32_t exprp = 0;
		for (int32_t i = this->firstChange; i < this->arity; ++i) {
			$var($LambdaForm$Name, name, $nc(this->names)->get(i));
			if (name != nullptr && name->isParam()) {
				$nc(this->names)->set(argp++, name);
			} else {
				exprs->set(exprp++, name);
			}
		}
		if (!LambdaFormBuffer::$assertionsDisabled && !(exprp == (this->arity - argp))) {
			$throwNew($AssertionError);
		}
		$System::arraycopy(exprs, 0, this->names, argp, exprp);
		this->arity -= exprp;
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(verifyArity())) {
		$throwNew($AssertionError);
	}
	return lambdaForm();
}

$LambdaForm$NameArray* LambdaFormBuffer::copyNamesInto($LambdaForm$NameArray* buffer) {
	$System::arraycopy(this->names, 0, buffer, 0, this->length);
	$Arrays::fill(buffer, this->length, $nc(buffer)->length, ($Object*)nullptr);
	return buffer;
}

LambdaFormBuffer* LambdaFormBuffer::replaceFunctions($List* oldFns, $List* newFns, $ObjectArray* forArguments) {
	$useLocalCurrentObjectStackCache();
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
	if ($nc(oldFns)->isEmpty()) {
		return this;
	}
	for (int32_t i = this->arity; i < this->length; ++i) {
		$var($LambdaForm$Name, n, $nc(this->names)->get(i));
		int32_t nfi = indexOf($nc(n)->function, oldFns);
		if (nfi >= 0 && $Arrays::equals($nc(n)->arguments, forArguments)) {
			changeName(i, $$new($LambdaForm$Name, $cast($LambdaForm$NamedFunction, $($nc(newFns)->get(nfi))), $nc(n)->arguments));
		}
	}
	return this;
}

void LambdaFormBuffer::replaceName(int32_t pos, $LambdaForm$Name* binding) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(verifyArity())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(pos < this->arity)) {
		$throwNew($AssertionError);
	}
	$var($LambdaForm$Name, param, $nc(this->names)->get(pos));
	if (!LambdaFormBuffer::$assertionsDisabled && !($nc(param)->isParam())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !($nc(param)->type$ == $nc(binding)->type$)) {
		$throwNew($AssertionError);
	}
	changeName(pos, binding);
}

LambdaFormBuffer* LambdaFormBuffer::renameParameter(int32_t pos, $LambdaForm$Name* newParam) {
	if (!LambdaFormBuffer::$assertionsDisabled && !($nc(newParam)->isParam())) {
		$throwNew($AssertionError);
	}
	replaceName(pos, newParam);
	return this;
}

LambdaFormBuffer* LambdaFormBuffer::replaceParameterByNewExpression(int32_t pos, $LambdaForm$Name* binding) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(!$nc(binding)->isParam())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(lastIndexOf(binding) < 0)) {
		$throwNew($AssertionError);
	}
	replaceName(pos, binding);
	return this;
}

LambdaFormBuffer* LambdaFormBuffer::replaceParameterByCopy(int32_t pos, int32_t valuePos) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(pos != valuePos)) {
		$throwNew($AssertionError);
	}
	replaceName(pos, $nc(this->names)->get(valuePos));
	noteDuplicate(pos, valuePos);
	return this;
}

void LambdaFormBuffer::insertName(int32_t pos, $LambdaForm$Name* expr, bool isParameter) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(inTrans())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(verifyArity())) {
		$throwNew($AssertionError);
	}
	if (!LambdaFormBuffer::$assertionsDisabled && !(isParameter ? pos <= this->arity : pos >= this->arity)) {
		$throwNew($AssertionError);
	}
	growNames(pos, 1);
	if (isParameter) {
		this->arity += 1;
	}
	changeName(pos, expr);
}

LambdaFormBuffer* LambdaFormBuffer::insertExpression(int32_t pos, $LambdaForm$Name* expr) {
	if (!LambdaFormBuffer::$assertionsDisabled && !(!$nc(expr)->isParam())) {
		$throwNew($AssertionError);
	}
	insertName(pos, expr, false);
	return this;
}

LambdaFormBuffer* LambdaFormBuffer::insertParameter(int32_t pos, $LambdaForm$Name* param) {
	if (!LambdaFormBuffer::$assertionsDisabled && !($nc(param)->isParam())) {
		$throwNew($AssertionError);
	}
	insertName(pos, param, true);
	return this;
}

void clinit$LambdaFormBuffer($Class* class$) {
	LambdaFormBuffer::$assertionsDisabled = !LambdaFormBuffer::class$->desiredAssertionStatus();
}

LambdaFormBuffer::LambdaFormBuffer() {
}

$Class* LambdaFormBuffer::load$($String* name, bool initialize) {
	$loadClass(LambdaFormBuffer, name, initialize, &_LambdaFormBuffer_ClassInfo_, clinit$LambdaFormBuffer, allocate$LambdaFormBuffer);
	return class$;
}

$Class* LambdaFormBuffer::class$ = nullptr;

		} // invoke
	} // lang
} // java