== Description ==
Auto Block Scheduler allows the administrator to schedule enable/disable Blocks
based on a pre-defined schedule.

The Administrator have to feed publish and un-publish dates
and the Auto Block Schedule will take care of enabling/disabling the block as
per the given dates.

Dates can be entered in “Y-m-d h:i:s” format.

== Notes ==

1. Please check if Cron is running correctly if your Blocks does not get
published as per your schedule.
2. Auto block Scheduler only does publishing and un-publishing of blocks.

Installation
------------
1. Copy the entire  directory of auto_block_scheduler to Drupal
sites/all/modules or sites/all/modules/contrib directory.

2. Login as an administrator to Enable the module in the "Administer" ->
   Modules (admin/modules)

3. Access the links to schedule enable/disable Blocks.
   (admin/structure/block)

== Author ==
Arulraj
