#include <ExpectedModel.h>

#include <jcpp.h>

using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

$NamedAttribute ExpectedModel_Attribute_var$0[] = {
	{"value", 'e', "Ljava/lang/annotation/RetentionPolicy; RUNTIME"},
	{}
};

$CompoundAttribute _ExpectedModel_Annotations_[] = {
	{"Ljava/lang/annotation/Retention;", ExpectedModel_Attribute_var$0},
	{}
};

$Attribute _ExpectedModel_DefaultValue_isDefault1 = {
	'Z', "false"
};

$Attribute _ExpectedModel_DefaultValue_modifiers2 = {
	'I', "1"
};

$MethodInfo _ExpectedModel_MethodInfo_[] = {
	{"declaringClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedModel, declaringClass, $Class*)},
	{"isDefault", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedModel, isDefault, bool), nullptr, &_ExpectedModel_DefaultValue_isDefault1},
	{"modifiers", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ExpectedModel, modifiers, int32_t), nullptr, &_ExpectedModel_DefaultValue_modifiers2},
	{}
};

$ClassInfo _ExpectedModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT | $ANNOTATION,
	"ExpectedModel",
	nullptr,
	"java.lang.annotation.Annotation",
	nullptr,
	_ExpectedModel_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_ExpectedModel_Annotations_
};

$Object* allocate$ExpectedModel($Class* clazz) {
	return $of($alloc(ExpectedModel));
}

$Class* ExpectedModel::load$($String* name, bool initialize) {
	$loadClass(ExpectedModel, name, initialize, &_ExpectedModel_ClassInfo_, allocate$ExpectedModel);
	return class$;
}

$Class* ExpectedModel::class$ = nullptr;