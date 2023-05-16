import React, { Component } from 'react';
import {
  BrowserRouter as Router,
  Routes,
  Route,
  Link,
} from "react-router-dom";
import Home from './01home'
import About from './02About'
import State from './03state';
import Lifecycle from './04Lifecycle';
import API from './05API';
import Compo from './06Compo';
import UseState from '../functioncompo/01UseState';

class Navbar extends Component {
    render() {

      const data= {'/home':'Home','/about':'About','/state':"State",'/lifecycle':"LifeCycle",'/api':"API"
                    ,'/compo':'Compo','/usestate':'Usestate'  } //{'/home'[0] : 'Home' [1]}
      const Alldata = Object.entries(data).map((res,i)=>{
        console.log(res);
        return <li className="nav-item" key={i}>
        <Link className="nav-link" to={res[0]}>{res[1]}</Link>
      </li>
      })
        return (
           <div>
            <>
          <Router>
            <nav className="navbar navbar-expand-sm navbar-dark bg-dark">
  <div className="container-fluid">
    <a className="navbar-brand" href="">Logo</a>
    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#mynavbar">
      <span className="navbar-toggler-icon"></span>
    </button>
    <div className="collapse navbar-collapse" id="mynavbar">
      <ul className="navbar-nav me-auto">
        {Alldata}
      </ul>
      <form className="d-flex">
        <input className="form-control me-2" type="text" placeholder="Search"/>
        <button className="btn btn-primary" type="button">Search</button>
      </form>
    </div>
  </div>
</nav>
<Routes>
  <Route path='/home' element={<Home/>}></Route>
  <Route path='/about' element={<About/>}></Route>
  <Route path='/state' element={<State/>}></Route>
  <Route path='/lifecycle' element={<Lifecycle/>}/>
  <Route path='/api' element={<API/>}/>
  <Route path='/compo' element={<Compo/>}/>
  <Route path='/usestate' element={<UseState/>}/>
</Routes>

</Router>
            
            </>
           </div>
        );
    }
}

export default Navbar;