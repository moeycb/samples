<?php

/*
 * This is where you place all the HTML for the homepage.
 */
$base = drupal_get_path ( 'module', 'usgs_homepage' ) . '/';

drupal_add_css(drupal_get_path('module','usgs_homepage') . '/css/homepage.css');



global $base_url;

$link = $base_url . '/' ;

?>

<div class="fixed-width-center">
<h1>U.S. Geological Survey</h1>
</div>

<div class="row">
	<div class="col-md-12">
		<div id="carousel-example-generic" class="carousel slide"
			data-ride="carousel">
			<!-- Indicators -->
			<ol class="carousel-indicators">
				<li data-target="#carousel-example-generic" data-slide-to="0"
					class="active"></li>
				<li data-target="#carousel-example-generic" data-slide-to="1"></li>
				<li data-target="#carousel-example-generic" data-slide-to="2"></li>
			</ol>
			<!-- Wrapper for slides -->
			<!-- slides #1 -->
			<div class="carousel-inner">
				<div class="item active">
					<img class="img-responsive phu-slider" src="<?php print $base ?>images/real-time-data.jpg" alt="USGS Placeholder" />
					<div class="carousel-caption">
						<div class="hidden-xs hidden-sm">
							<h3>National Groundwater Awareness Week</h3>
							<p>What’s so special about groundwater? Groundwater is one of the
								Nation’s most valuable natural resources</p>
							<a href="<?php echo $link ?>science-explorer"><button type="button" class="btn btn-slide">Read Story</button></a>
						</div>
					</div>
				</div>
				<!-- slides #2-->
				<div class="item">
					<img class="img-responsive phu-slider" src="<?php print $base ?>images/products.jpg" alt="USGS Placeholder" />
					<div class="carousel-caption">
						<div class="hidden-xs hidden-sm">
							<h3>Featured Story</h3>
							<p>Names on theLand: The Role of the U.S Board on Geographic Names</p>
							<a href="<?php echo $link ?>science-explorer"><button type="button" class="btn btn-slide">Read Story</button></a>
						</div>
					</div>
				</div>
				<!-- slides #3 -->
				<div class="item">
					<img class="img-responsive phu-slider" src="<?php print $base ?>images/science.jpg" alt="USGS Placeholder" />
					<div class="carousel-caption">
						<div class="hidden-xs hidden-sm">
							<h3>Battling Botulism in Birds</h3>
							<p>A paralyzing disease known as botulism has killed over 100,000
								birds in parts of the Great Lakes since 1999.</p>
							<a href="<?php echo $link ?>science-explorer"><button type="button" class="btn btn-slide">Read Story</button></a>
						</div>
					</div>
				</div>
			</div>

			<!-- Controls -->
			<a class="left carousel-control" href="#carousel-example-generic"
				role="button" data-slide="prev"> <span
				class="glyphicon glyphicon-chevron-left"></span>
			</a> <a class="right carousel-control"
				href="#carousel-example-generic" role="button" data-slide="next"> <span
				class="glyphicon glyphicon-chevron-right"></span>
			</a>
		</div>
	</div>
</div>

<!-- End of Carousel -->


<!-- End of slides -->






<!-- Mobile view -->

<div class="home_content_mobile visible-xs visible-sm">
<h4><a href="<?php echo $link ?>about">Names on Land: The Role of the U.S. Board on the Geographic Names</a></h4>
<hr>

			<p>We provide science about the natural hazards that
				threaten lives and livelihoods, the water, energy, minerals, and
				other natural resources we rely on the health of our ecosystems and
				environment, and the impacts of climate and land-use change. Our
				scientists also develop new methods and tools to enable timely,
				relevant, and useful information about the Earth and its processes. <a herf="/about">Learn More About Us.</a></p>
</div>


<div class="accordion visible-xs visible-sm hidden-md hidden-lg" id="accordion2">
  <div class="accordion-group">
    <div class="accordion-heading">
      <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion2" href="#collapseOne">
        OUR SCIENCE<span class="glyphicon glyphicon-plus" aria-hidden="true" style="float:right;"></span>
      </a>
    </div>
    <div id="collapseOne" class="accordion-body collapse">
      <div class="accordion-inner">
        	<div class="row">
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>science-explorer">Science Explorer</a>
			</h4>
			<p>Learn more about our science through a guided topical exploration.</p>
			<a href="<?php echo $link ?><?php echo $link ?>science-explorer">
				<button type="button" class="btn btn-success">Learn More</button> </a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>mission-areas">Mission Areas</a>
			</h4>
			<p>Learn about our science and the programs within our organizational
				structure.</p>
			<a href="<?php echo $link ?>mission-areas">
				<button type="button" class="btn btn-success">Learn</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>science/science-centers">Science Centers</a>
			</h4>
			<p>Find out what research and projects is being conducted at our
				centers.</p>
                <a href="<?php echo $link ?>science/science-centers">
			<button type="button" class="btn btn-success">Find Out</button></a>
		</div></div>

		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>regions">Regions</a>
			</h4>
			<p>Explore the scientific activities that are going on across the
				country.</p>
			 <a href="<?php echo $link ?>regions">
				<button type="button" class="btn btn-success">Explore</button>
			</a>
		</div></div>


	</div>
      </div>
    </div>
  </div>
  <div class="accordion-group">
    <div class="accordion-heading">
      <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion2" href="#collapseTwo">
        SCIENCE PRODUCTS<span class="glyphicon glyphicon-plus" aria-hidden="true" style="float:right;"></span>
      </a>
    </div>
    <div id="collapseTwo" class="accordion-body collapse">
      <div class="accordion-inner">
        <div class="row">
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/earthquakes">Earthquakes</a>
			</h4>
			<p>
				View the <a
					href="http://earthquake.usgs.gov/earthquakes/?source=sitenav">recent
					earthquake M 4.2, 7km NW of Westwood, California</a> Monday, June
				02, 2014 02:36:43 UTC and more.
			</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/earthquakes">
				<button type="button" class="btn btn-success">View All</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?><?php echo $link ?>data-and-tools/real-time-data/water">Water</a>
			</h4>
			<p>Explore current water conditions that are important to you, such
				as stream!ow, water levels, quality, and more.</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/water">
				<button type="button" class="btn btn-success">Explore</button> </a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a
					href="<?php echo $link ?>data-and-tools/real-time-data/remote-land-sensing-and-landsat">Remote
					Sensing and Landsat</a>
			</h4>
			<p>Learn more about the Earth with our airborne and space-borne
				sensors or cameras.</p>
			<a
				href="<?php echo $link ?>data-and-tools/real-time-data/remote-land-sensing-and-landsat">
				
				<button type="button" class="btn btn-success">Learn More</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/volcanoes">Volcanoes</a>
			</h4>
			<p>View alerts for U.S.volcanoes, subscribe to notification services,
				or learn more about volcanoes through the observatories.</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/volcanoes">
				<button type="button" class="btn btn-success">View Alerts</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/landslides">Landslides</a>
			</h4>
			<p>
				Get the latest landslide monitoring information and alerts. Report a
				landslide and see reported landslides at <a
					href="http://landslides.usgs.gov/dysi/">Did You See It?</a>
			</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/landslides">
				<button type="button" class="btn btn-success">Get the Latest</button>
			</a>
		</div></div>

	</div>
      </div>
    </div>
  </div>
   <div class="accordion-group">
    <div class="accordion-heading">
      <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion3" href="#collapseThree">
        REAL-TIME DATA INFORMATION<span class="glyphicon glyphicon-plus" aria-hidden="true" style="float:right;"></span>
      </a>
    </div>
    <div id="collapseThree" class="accordion-body collapse">
      <div class="accordion-inner">
        <div class="row">
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/earthquakes">Earthquakes</a>
			</h4>
			<p>
				View the <a
					href="http://earthquake.usgs.gov/earthquakes/?source=sitenav">recent
					earthquake M 4.2, 7km NW of Westwood, California</a> Monday, June
				02, 2014 02:36:43 UTC and more.
			</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/earthquakes">
				<button type="button" class="btn btn-success">View All</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/water">Water</a>
			</h4>
			<p>Explore current water conditions that are important to you, such
				as stream!ow, water levels, quality, and more.</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/water">
				<button type="button" class="btn btn-success">Explore</button> </a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a
					href="<?php echo $link ?>data-and-tools/real-time-data/remote-land-sensing-and-landsat">Remote
					Sensing and Landsat</a>
			</h4>
			<p>Learn more about the Earth with our airborne and space-borne
				sensors or cameras.</p>
			<a
				href="<?php echo $link ?>data-and-tools/real-time-data/remote-land-sensing-and-landsat">
				
				<button type="button" class="btn btn-success">Learn More</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/volcanoes">Volcanoes</a>
			</h4>
			<p>View alerts for U.S.volcanoes, subscribe to notification services,
				or learn more about volcanoes through the observatories.</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/volcanoes">
				<button type="button" class="btn btn-success">View Alerts</button>
			</a>
		</div></div>
		<div class="usgs-5-col-md-1">
			<div class="moiblepadding"><h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/landslides">Landslides</a>
			</h4>
			<p>
				Get the latest landslide monitoring information and alerts. Report a
				landslide and see reported landslides at <a
					href="http://landslides.usgs.gov/dysi/">Did You See It?</a>
			</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/landslides">
				<button type="button" class="btn btn-success">Get the Latest</button>
			</a>
		</div></div>

	</div>
      </div>
    </div>
  </div><br><br>
</div>



<!-- End Mobile view -->













<!-- Desktop view -->


<div class="home_content hidden-xs hidden-sm">

    <div class="row fixed-width-center">

	<div class="col-md-12">
                                <p class="lead">We provide science about the natural hazards that
				threaten lives and livelihoods, the water, energy, minerals, and
				other natural resources we rely on the health of our ecosystems and
				environment, and the impacts of climate and land-use change. Our
				scientists also develop new methods and tools to enable timely,
				relevant, and useful information about the Earth and its processes.</p>
                                <br />


                                <a href="<?php echo $link ?>about"><button type="button" class="btn btn-success">Learn
					More</button></a> <br>
                                <br>
                                <br>
                               <div ><a href="#sec1" data-target="#"><div class="chevron-down" style="text-align: center;">
					<span class="glyphicon glyphicon-chevron-down"></span></a>
                                </div>
	</div>
    </div>
</div>

</div>

<!-- wrapper around content -->
<div class="hidden-xs hidden-sm">

<!-- REAL-TIME DATA Section-->


<div class="row">
    <div class="col-md-12">
	<div class="carousel-inner fixed-carousel">
		<a name="sec1" id="sec1"><img class="img-responsive"
			src="<?php print $base ?>images/real-time-data.jpg" alt="USGS Placeholder" /></a>
		<div class="carousel-caption">
			<div class="hidden-xs">
				<h3>Real-time Data</h3>
				<p>This science information is delivered immediately after
					collection. There is no delay in the timeliness of the information
					provided.</p>
			</div>
		</div>

	</div>
  </div>

</div>

<div class="home_images fixed-width-center">
	<div class="row">
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/earthquakes">Earthquakes</a>
			</h4>
			<p>
				View the <a
					href="http://earthquake.usgs.gov/earthquakes/?source=sitenav">recent
					earthquake M 4.2, 7km NW of Westwood, California</a> Monday, June
				02, 2014 02:36:43 UTC and more.
			</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/earthquakes">
				<button type="button" class="btn btn-success">View All</button>
			</a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/water">Water</a>
			</h4>
			<p>Explore current water conditions that are important to you, such
				as stream!ow, water levels, quality, and more.</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/water">
				<button type="button" class="btn btn-success">Explore</button> </a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a
					href="<?php echo $link ?>data-and-tools/real-time-data/remote-land-sensing-and-landsat">Remote
					Sensing and Landsat</a>
			</h4>
			<p>Learn more about the Earth with our airborne and space-borne
				sensors or cameras.</p>
			<a
				href="<?php echo $link ?>data-and-tools/real-time-data/remote-land-sensing-and-landsat">
				
				<button type="button" class="btn btn-success">Learn More</button>
			</a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/volcanoes">Volcanoes</a>
			</h4>
			<p>View alerts for U.S.volcanoes, subscribe to notification services,
				or learn more about volcanoes through the observatories.</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/volcanoes">
				<button type="button" class="btn btn-success">View Alerts</button>
			</a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>data-and-tools/real-time-data/landslides">Landslides</a>
			</h4>
			<p>
				Get the latest landslide monitoring information and alerts. Report a
				landslide and see reported landslides at <a
					href="http://landslides.usgs.gov/dysi/">Did You See It?</a>
			</p>
			<a href="<?php echo $link ?>data-and-tools/real-time-data/landslides">
				<button type="button" class="btn btn-success">Get the Latest</button>
			</a>
		</div>

	</div>
</div>

<a href="#sec2" data-target="#"><div class="chevron-down" style="text-align: center;">
		<span class="glyphicon glyphicon-chevron-down"></span></a>
</div>

<div class="row">
<div class="col-md-12">
	<div class="carousel-inner fixed-carousel">
		<a name="sec2" id="sec2"><img class="img-responsive"
			src="<?php print $base ?>images/science.jpg" alt="USGS Placeholder" /></a>
		<div class="carousel-caption">
			<div class="hidden-xs">
				<h3>Our Science</h3>
				<p>What, where, and how we conduct and perform science about a
					changing world. Start with Science.</p>
			</div>
		</div>
	</div>

        </div>
</div>

<div class="home_images fixed-width-center">
	<div class="row">
		<div class="col-md-3">
			<h4>
				<a href="<?php echo $link ?>science-explorer">Science Explorer</a>
			</h4>
			<p>Learn more about our science through a guided topical exploration.</p>
			<a href="<?php echo $link ?>science-explorer">
				<button type="button" class="btn btn-success">Learn More</button> </a>
		</div>
        <div class="col-md-3">
			<h4>
				<a href="<?php echo $link ?>mission-areas">Mission Areas</a>
			</h4>
			<p>Learn about our science and the programs within our organizational
				structure.</p>
			<a href="<?php echo $link ?>mission-areas">
				<button type="button" class="btn btn-success">Learn</button>
			</a>
		</div>
        <div class="col-md-3">
			<h4>
				<a href="<?php echo $link ?>science/science-centers">Science Centers</a>
			</h4>
			<p>Find out what research and projects is being conducted at our
				centers.</p>
            <a href="<?php echo $link ?>science/science-centers">
			<button type="button" class="btn btn-success">Find Out</button>
                </a>
		</div>

        <div class="col-md-3">
			<h4>
				<a href="<?php echo $link ?>regions">Regions</a>
			</h4>
			<p>Explore the scientific activities that are going on across the
				country.</p>
			 <a href="<?php echo $link ?>regions">
				<button type="button" class="btn btn-success">Explore</button>
			</a>
		</div>


	</div>
</div>
<a href="#sec3" data-target="#"><div class="chevron-down" style="text-align: center;">
		<span class="glyphicon glyphicon-chevron-down"></span></a>
</div>


<div class="row">
<div class="col-md-12">
	<div class="carousel-inner fixed-carousel">
		<a name="sec3" id="sec3"><img class="img-responsive"
			src="<?php print $base ?>images/products.jpg" alt="USGS Placeholder" /></a>
		<div class="carousel-caption">
			<div class="hidden-xs">
				<h3>Products</h3>
				<p>One of our primary functions is to provide quality scientific
					information to the public through our various products.</p>
			</div>
			<br>

		</div>
	</div>

 </div>
</div>




<div class="home_images fixed-width-center">
	<div class="row">

		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>data-and-tools/data-and-tools-topics">Data and Tools</a>
			</h4>
			<p>Browse APIs, the Science Data Catalog, real-time data information,
				and more.</p>
			<a href="<?php echo $link ?>data-and-tools/data-and-tools-topics">
				<button type="button" class="btn btn-success">Browse</button>
			</a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>maps">Maps</a>
			</h4>
			<p>Explore and download topographic maps, geologic maps, and more.</p>
            <a href="<?php echo $link ?>maps">
			<button type="button" class="btn btn-success">Explore</button></a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>multimedia-gallery">Multimedia Gallery</a>
			</h4>
			<p>View thousands of photos,watch videos, and listen to interviews
				and podcasts.</p>
            <a href="<?php echo $link ?>multimedia-gallery">
			<button type="button" class="btn btn-success">View All</button></a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>software">Software</a>
			</h4>
			<p>Access software that helps display and interpret data from a
				variety of sources.</p>
            <a href="<?php echo $link ?>software">
			<button type="button" class="btn btn-success">Access</button></a>
		</div>
		<div class="usgs-5-col-md-1">
			<h4>
				<a href="<?php echo $link ?>publications">Publications</a>
			</h4>
			<p>Search and read 100,000+ scientific publications, books, and more.</p>
            <a href="<?php echo $link ?>publications">
			<button type="button" class="btn btn-success">Search</button></a>
		</div>


	</div>

    </div>
</div>