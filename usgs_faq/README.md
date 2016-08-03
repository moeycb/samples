# USGS FAQ Module
## Gina Walton

This module :
    1. creates the FAQ term under 'Products' in USGS Tags.
    2. adds the fields below to the usgs_base_node
        call-to-action
        question
        spotlight
        popular
        moderation_state
 

To set this story up for testing:
1. Remove the spotlight field from usgs_base_node
2. Disable and Uninstall usgs_faq
3. Re-enable usgs_faq

This story should:
1. Not create an additional FAQ term under Products in USGS Tags
2. Not re-create existing fields, but in the end usgs_node should have the 
   following fields which should also display in this order on the form. The
   form should also display any common fields added by usgs_base_node. News
   and other module specific items should not display:
3. For FAQ Content
        'title',
        'field_faq_type',
        'field_image',
        'field_question',
        'body',
        'field_moderation_state',
        'field_author_email',
        'field_source_url',
        'field_call_to_action',
        'field_topics',
        'field_faq_category',
        'field_faq_tags',
3. The form should display these fields for spotlight:
        'title',
        'field_faq_type',
        'field_image',
        'field_caption',
        'field_moderation_state',
        'field_call_to_action',
4. Creates FAQ Categories taxonomy
5. Creates FAQ Tags taxonomy
6. Creates Topic taxonomy