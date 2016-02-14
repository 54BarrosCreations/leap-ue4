#pragma once

#include "LeapMotionPublicPCH.h"
#include "LeapImageList.generated.h"

//API Reference: https://developer.leapmotion.com/documentation/cpp/api/Leap.ImageList.html

UCLASS(BlueprintType)
class ULeapImageList : public UObject
{
	GENERATED_UCLASS_BODY()
public:
	~ULeapImageList();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Image List")
	bool IsEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Leap Image List")
	int32 Count;
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "getIndex", CompactNodeTitle = "", Keywords = "get index"), Category = "Leap Image List")
	class ULeapImage* GetIndex(int32 Index);

	ULeapImage* operator[](int Index);

	void SetLeapImageList(const class Leap::ImageList &LeapImageList);

	virtual void CleanupRootReferences();

private:
	class PrivateLeapImageList* Private;
};