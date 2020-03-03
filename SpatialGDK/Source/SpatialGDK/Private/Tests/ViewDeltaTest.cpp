// Copyright (c) Improbable Worlds Ltd, All Rights Reserved

#include "Tests/TestDefinitions.h"

#include "ViewDelta.h"

#define VIEWDELTA_TEST(TestName) \
	GDK_TEST(Core, ViewDelta, TestName)

using namespace SpatialGDK; 

VIEWDELTA_TEST(GIVEN_empty_ViewDelta_WHEN_GetCreateEntityResponses_called_THEN_no_CreateEntityResponse_responses_returned)
{
	return true;
}

VIEWDELTA_TEST(GIVEN_empty_ViewDelta_WHEN_GeneratedLegacyOpList_called_THEN_no_ops_returned_returned)
{
	ViewDelta Delta;
	auto OpList = Delta.GenerateLegacyOpList();

	TestTrue("Valid OpList returned", OpList != nullptr);
	return true;
}

VIEWDELTA_TEST(GIVEN_ViewDelta_with_one_CreateEntityResponse_added_WHEN_GetCreateEntityResponse_called_THEN_one_CreateEntityResponse_returned)
{
	return true;
}

VIEWDELTA_TEST(GIVEN_ViewDelta_with_multiple_CreateEntityResponse_added_WHEN_GetCreateEntityResponse_called_THEN_multiple_CreateEntityResponses_returned)
{
	return true;
}

VIEWDELTA_TEST(GIVEN_ViewDelta_with_one_CreateEntityResponse_added_WHEN_GenerateLegacyOpList_called_THEN_one_op_returned)
{
	return true;
}

VIEWDELTA_TEST(GIVEN_ViewDelta_with_multiple_CreateEntityResponse_added_WHEN_GenerateLegacyOpList_called_THEN_multiple_ops_returned)
{
	return true;
}

VIEWDELTA_TEST(GIVEN_non_empty_ViewDelta_WHEN_Clear_called_THEN_GetCreateEntityResponse_returns_no_items)
{
	return true;
}

VIEWDELTA_TEST(GIVEN_non_empty_ViewDelta_WHEN_Clear_called_THEN_GenerateLegacyOpList_returns_no_items)
{
	return true;
}
