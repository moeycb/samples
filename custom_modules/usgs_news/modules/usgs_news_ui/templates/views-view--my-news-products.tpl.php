<div  id="ajax-replace" class="<?php print $classes; ?>">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
            <?php print $title; ?>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php if ($header): ?>
            <div class="view-header">
                <?php print $header; ?>
            </div>
        <?php endif; ?>
    <div class="container col-md-12">
        <div class="panel panel-default">
            <div class="panel-heading">
            <h4 class="panel-title">Add News Product</h4>
                <h5>Select from news products below</h5>
            </div>
                <div class="panel-body">
            <select class="form-control form-select col-md-5">
                <option>Top Story</option>
                <option>Science Snippet</option>
                <option>Employee In The News</option>
                <option>National News Story</option>
            </select>
                    <div class="col-md-4">
                        <button class="btn btn-success col-md-4">Add</button>
                    </div>
                    </div>
                </div>
</div>
<div class="container col-md-12">
    <div class="panel panel-default">
        <div class="panel-heading">
            <h4 class="panel-title">Refine Search</h4>
            <h5>Select from current status, news product, or author</h5>
        </div>
            <?php if ($exposed): ?>
                <div class="view-filters">
                    <?php print $exposed; ?>
                </div>
            <?php endif; ?>
    </div>
    </div>
        <?php if ($attachment_before): ?>
            <div class="attachment attachment-before">
                <?php print $attachment_before; ?>
            </div>
        <?php endif; ?>

<div class="col-md-12">
  <div class="col-md-1"><h3>Status</h3></div>
    <div class="col-md-<?php print $type_width?>"><h3>Type</h3></div>
    <div class="col-md-<?php print $image_width?>"><h3>Image</h3></div>
    <div class="col-md-3"><h3>Title</h3></div>
    <?php if($show_owner){ ?><div class="col-md-2"><h3>Content Owner</h3></div><?php } ?>
    <div class="col-md-2"><h3>Release Date</h3></div>
    <div class="col-md-2"><h3>Action</h3></div>

</div>
    <hr class="col-md-12" />
        <?php if ($rows): ?>
            <div class="view-content container col-md-12">
                <?php print $rows; ?>
            </div>
        <?php elseif ($empty): ?>
            <div class="view-empty">
                <?php print $empty; ?>
            </div>
        <?php endif; ?>

        <?php if ($pager): ?>
            <?php print $pager; ?>
        <?php endif; ?>

        <?php if ($attachment_after): ?>
            <div class="attachment attachment-after">
                <?php print $attachment_after; ?>
            </div>
        <?php endif; ?>

        <?php if ($more): ?>
            <?php print $more; ?>
        <?php endif; ?>

        <?php if ($footer): ?>
            <div class="view-footer">
                <?php print $footer; ?>
            </div>
        <?php endif; ?>

        <?php if ($feed_icon): ?>
            <div class="feed-icon">
                <?php print $feed_icon; ?>
            </div>
        <?php endif; ?>

    </div>
</div>